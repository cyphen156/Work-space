--1.jones ���� ���� ������ �޴� �����, ���� �˻�
select ename �����, job ����
from emp
where sal > (select sal from emp where ename = 'JONES');

--2. ���ӻ�簡 'jones'�� ����� �����, �Ի���, �ҼӺμ��� �˻�
select e.ename �����, e.hiredate �Ի���, d.dname �ҼӺμ���
from emp e join dept d on e.deptno = d.deptno
where mgr = (select empno from emp where ename = 'JONES');

-- 3. �μ��� RESEARCH�� �Ҽӵ� �����, ���� �˻�(��������, exists ���)
select ename �����, sal ����
from emp
where exists (select * from dept where emp.deptno = dept.deptno and dept.dname = 'RESEARCH');

-- 4. 30���� �ٹ��ϴ� ������� ��� �޿����� ���� �޿��� �޴� �����
select ename �����
from emp 
where sal > (select sum(sal) from emp where deptno = 30);


-- 5. ���޺� �ּҺ����� �޴� �����, ���� �˻�
select job ����, ename �����, min(sal) ����
from emp
group by job;
