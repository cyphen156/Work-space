--10th_�ǽ�Ȱ��         
-- 1.�����, �ҼӺμ���, ����, ������ �˻��ϴ� view(view_ed) ����
create or replace view view_ed
as
select ename, dname, job, sal
from emp e, dept d
where d.deptno = e.deptno;

-- 2.������ ���� Ȱ���Ͽ� 3���̻� �Ҽӻ���� �ִ� �μ����� �μ���, �����, ��ձ޿� �˻� 
select dname �μ���, count(dname) �����, avg(sal) ��ձ޿�
from view_ed
group by dname;

-- 3. ����ڰ� ������ �� ���� ��ȸ
desc user_views;

-- 4. 1���� ������ �� ����
drop view view_ed;

-- 5. ������ �並 ���� ���ο� ��� ����(�̸�, ����, ����)�� �Է��غ���, ���԰����Ѱ�?
insert into view_ed(ename, sal, job) values ("������", 1500, "salesman");
--���Ե��� �ʽ��ϴ� Why? dname������ �Էµ��� �ʾƼ�??

-- 6. ���� �ֱٿ� �Ի��� ��� 5���� ����(�����, ����, �ҼӺμ���ȣ, �Ի���) �˻�
-- �ζ��� �� ���
select *
from (select ename �����, job ����, deptno �ҼӺμ���ȣ, hiredate �Ի���
from emp 
order by hiredate desc)
where rownum <= 5;

-- 7.1981��뿡 �Ի��� ������� �����, ����, �ҼӺμ���պ��� �˻�
-- ��Į�� �������� ���
select ename �����, sal ����, (select avg(sal) from emp e where e.deptno = d.deptno) �ҼӺμ���պ���
from emp e, dept d
where to_char(hiredate, 'yyyy') = 1981 and e.deptno = d.deptno;

-- 8. �Ҽӻ���� �ִ� �μ��� �˻�(������ ��������, exists �������� ���) 
select dname
from dept d
where exists (select dname
from emp e where d.deptno = e.deptno)

