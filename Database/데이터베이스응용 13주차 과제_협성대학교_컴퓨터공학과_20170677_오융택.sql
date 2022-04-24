--1. �ε��� ����
-- emp���̺��� job Į���� �ε����� ���� (����ڰ� �ε����� ����)
create index emp_job
on emp(job);
-- ������ �ε��� ���� Ȯ��
select table_name, index_name from user_indexes where table_name = 'EMP';
-- ������ ������ �ε��� ����
drop index emp_job;

--2. ���� �ּҰ��� �˻��ϱ� ���� ���ǹ��� ����(order by ��)�� ������� �ʰ� �ε����� Ȱ���Ͽ� �˻�
create index emp_sal
on emp(sal);

select sal
from emp
where sal > '0' and rownum = 1;

--3. ������ ����
-- emp ���̺��� empno���� ������ ���� �����ؼ� �����ϱ� ���� ������ ���� 
--���۰� : 2107001
--������ : 1
--�ִ밪 : 2107100
--nocycle 
create sequence emp_empno_seq_uk
increment by 1
start with 2107001
MAXVALUE 2107100
MINVALUE 2107001
NOCYCLE;


-- �������� �̿��Ͽ� emp ���̺� ���ο� ���� ����
create table emp_empno
as 
select empno
from emp
where 1=2;
insert into emp_empno
values(EMP_EMPNO_SEQ_UK.nextval);

-- ������� ������ ������ �� ��ȸ
SELECT *
FROM user_sequences;

--4. ������ ����
-- jones ����� �������� ���� ���� ��� �˻� (sys_connect_by_path Ȱ��)
select level, ename, empno, mgr, sys_connect_by_path(ename, '/') enamepath
from emp
start with ename = 'JONES'
connect by prior empno = mgr;
-- smith�� �������� ��� ��� �˻�
select level, ename, empno, mgr, sys_connect_by_path(ename, '/') enamepath
from emp
start with ename = 'SMITH'
connect by empno = PRIOR MGR;
-- ���� �����Ϳ��� LEAF ���(��������� �ִ� ����鿡 ���Ͽ�)�� �ƴ� ������� �����, ���� �˻� (king�� �������� ������ ����)
-- connect_by_isleaf ���
select level, ename, empno, mgr, sys_connect_by_path(ename, '/') enamepath
from emp
where CONNECT_BY_ISLEAF = 0
start with mgr is null
connect by prior empno = mgr;


--������ ������ Ȱ���Ͽ� �����, �����ڸ��� �˻�(���� ���������� ename������ ��µǵ���)            
select level, ename �����, prior ename �����ڸ�, sys_connect_by_path(ename, '/') enamepath
from emp
start with mgr is null
connect by prior empno = mgr
order by level, �����ڸ�, ename;


