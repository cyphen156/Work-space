-- 5TH �ǽ�Ȱ��

-- 1. ���޺� ����� 3�� �̻��� ���޿� ���Ͽ� ���޺� �ִ�޿�, �ο��� �˻�

select job ����, max(sal) �ִ�޿�, count(ename) �ο���
from emp
group by job 
having count(ename) >= 3;


-- 2. ���޺� ��պ���, �μ���ȣ�� ��պ���, ��ü ��պ��� �˻�

select job ����, deptno �μ���ȣ, round(avg(sal)) ��պ���
from emp
group by grouping sets(job, deptno, ());


-- 3. ���޺� �μ��� ��պ���, ���޺� ��պ���, �μ���ȣ�� ��պ���, ��ü ��պ��� �˻�
select job ����, deptno �μ���ȣ, round(avg(sal)) ��պ���
from emp
group by grouping sets((job, deptno), deptno, job, ())
order by job, deptno;


-- 4. ���޺� ������� �Ի������� ���η� ��� 
select job ����, listagg(ename, ',') within group (order by hiredate)�����
from emp
group by job
order by job;