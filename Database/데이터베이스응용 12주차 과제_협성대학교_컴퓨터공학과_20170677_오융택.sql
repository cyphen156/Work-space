--1. emp ���̺�� ������ ������ �� ���̺� ����(empcp)
--dept ���̺�� ������ ������ �� ���̺� ����(deptcp)
create table empcp
as 
select * from emp
where 1=2;

create table deptcp
as 
select * from dept
where 1=2;


--2. emp ���̺��� dept�� 10, 20�� ������  empcp ���̺� ����
--  ��� dept ������ deptcp ���̺� ����
insert into empcp
select *
from emp
where deptno = 20 or deptno = 10;

insert into deptcp
select *
from dept;

--3. empcp ���̺� empno�� �⺻Ű ���� ����, deptno�� deptcp ���̺��� deptno�� �����ϴ� �ܷ�Ű ����   ���� �߰�
--  (���� �߻� �� ���� ���� ���� �� �ذ�)
alter table empcp
add constraint empcp_empno_pk primary key(empno);
alter table empcp
add constraint empcp_deptno_fk foreign key(deptno) REFERENCES deptcp(deptno)
on delete cascade;
alter table deptcp
add constraint deptcp_deptno_pk primary key(deptno);
-->deptcp �� �⺻Ű�� �����ϴ�. deptcp���̺��� deptno�� �⺻Ű�� �������ݴϴ�


--4. empcp ���̺��� ename�� not null ���� ���� ����
alter table empcp
modify empno constraint empcp_empno_nn not null;

--5. ����� ������ ���̺� ��� ��ȸ
select *
from tabs;

--6. ������ ���� ���� ���� ��ȸ
select constraint_name, constraint_type, table_name
from user_constraints;

--7. empcp ���̺� ���ο� ������ ����
--(7777,'hyupsung','CLERK',7782,'2000-01-23',1300,500,50);
--���� ���� �Ѱ�? ������ �߻��ߴٸ� ���� ������?
insert into empcp
values (7777,'hyupsung','CLERK',7782,'2000-01-23',1300,500,50);
--> ���Ե��� �ʽ��ϴ� ���Ἲ ��������-parentŰ�� ���� ������

--8. exceptions ���̺� ����(@?/rdbms/admin/utlexcpt.sql)
--   sql command line���� ����
--SQL> conn c##scott
--��й�ȣ �Է�:tiger
--����Ǿ����ϴ�.
--SQL> @?/rdbms/admin/utlexcpt.sql

--9. empcp ���̺� deptno�� ������ �ܷ�Ű ���� ���� ��Ȱ��ȭ
alter table empcp
disable constraint empcp_deptno_fk;

--10. �ٽ� empcp ���̺� ���ο� ������ ����
--(7777,'hyupsung','CLERK',7782,'2000-01-23',1300,500,50);
--���� �����Ѱ�?
insert into empcp
values (7777,'hyupsung','CLERK',7782,'2000-01-23',1300,500,50);
-->���԰����մϴ�

--11. empcp ���̺� deptno�� ������ �ܷ�Ű ���� ���� �ٽ� Ȱ��ȭ
--(�������ǿ� ����Ǵ� ������ ���� exceptions ���̺� �����ϵ��� ����)
alter table empcp
enable validate constraint empcp_deptno_fk
exceptions into exceptions;

--12. exceptions ���̺� ���� ��ȸ
select * from exceptions;

--13. empcp ���̺��� exceptions ���̺� ��ϵ� ��� ��ġ�ϴ� ������(rowid, empno, deptno)�� ��ȸ
select rowid, empno, deptno
from empcp
where rowid in (select row_id from exceptions);

--14.������ ��ȸ�� �����͸� �����Ͽ� ���Ἲ �������ǿ� ����Ǵ� ������ ���� 
update empcp
set deptno = 30
where rowid='AAAUexAAHAAAACdAAH';

--15. deptcp ���̺��� �⺻Ű ���� ���� ���� (�����ϴ� ���̺��� ������ ��� �������� cascade �ɼ� ���)
alter table deptcp
drop constraint deptcp_deptno_pk
cascade;

--16. empcp, deptcp ���̺��� ��� ������ ����, exceptions ���̺� �����͵� ����
delete from empcp;
delete from deptcp;
delete from exceptions;
--17. empcp, deptcp ���̺� ����
drop table empcp;
drop table deptcp;



