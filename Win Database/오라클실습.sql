-- �Ϲ��Լ�
-- �����, ����, Ŀ�̼�, ����(����*12+comn)
--nvl, nvl2��
select ename, sal, comm, nvl2(comm, 'Yes', 'No') ���
from emp;

--decode('sel', '', '')/case�� == case when '' end
select ename, deptno, decode(deptno, 10, '10���μ��Ҽ�')
from emp;
select ename, job, decode(job, 'CLERK', sal*0.05, 'SALESMAN', sal*0.1, sal*0.03) DECODE��,
case when job = 'CLERK' then sal*0.05 when job = 'SALESMAN' then sal*0.1 else  sal*0.03 end CASE��
from emp;

--�����, �Ի���, �Ի�ñ�(�б�)
--select ename, hiredate, hiredate �Ի�ñ�(�б�)
--from emp;

--regexp_like
select regexp_replace(ename, '$', '*') �����, regexp_replace(hiredate, '/', '-') �Ի���
from emp;

--regexp_count
select ename, sal, regexp_count(ename, 'S') "S���ڰ���", regexp_count(sal, 0) "0�ǰ���"
from emp;