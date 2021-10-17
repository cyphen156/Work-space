--*pivot���� �̿��� ������˻��̾�ƽ��ϴ�.


--1. �޿�+Ŀ�̼�  ���� �ִ�/�ּ�/��հ� �˻�
-- Ŀ�̼��� ���� ��� 0���� ���, ��� �ݾ��� ��� �Ҽ� ù°�ڸ����� ���

select trunc(max(sal + NVL(comm,0)), 1) �ִ�, trunc(min(sal + NVL(comm,0)), 1) �ּ�, trunc(avg(sal + NVL(comm,0)), 1) ���
from emp;


-- 2. �μ���/�⵵�� �Ի��� ����� �˻� (group by��,���η� ��� pivot �̿�)
--group by��
select deptno, to_char(hiredate, 'yyyy') �⵵, count(ename)�����
from emp
group by deptno, to_char(hiredate, 'yyyy')
order by 1;

--pivot��
select *
from (select deptno, to_char(hiredate, 'yyyy') �⵵ from emp)
pivot (count(*) for �⵵ in ('�⵵', '�����'))
order by 1;

-- 3. �μ���/�⵵�� �Ի��� ����� �˻� (���η� ���) - pivot �̿�

select *
from (select deptno, to_char(hiredate, 'yyyy') �⵵ from emp)
pivot (count(*) for �⵵ in ('1980', '1981', '1982', '1987'))
order by deptno;


--4. �����, ����, �Ի���, �ҼӺμ���պ���, �Ի����, ���޺���, �����Ի��ѻ���� �˻�
select ename, sal, hiredate, 
round(avg(sal) over(partition by deptno), 0) �ҼӺμ���պ���, 
rank() over(order by hiredate) �Ի����, 
round(ratio_to_report(sal) over (), 3) ���޺���, 
lag(ename) over (order by hiredate) ���ӻ����
from emp;