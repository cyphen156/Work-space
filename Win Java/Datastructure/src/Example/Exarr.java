package Example;

import java.util.Scanner;

public class Exarr {

	public static void main(String[] args) {
		int i, j, num;
		Scanner sc = new Scanner(System.in);
		int numArr[] = {10, 20, 30, 40, 50};
		System.out.print("���� �迭 : {");
		for(i = 0; i < numArr.length-1; i++) {
			System.out.print(numArr[i] + ", ");
		}
		System.out.print(numArr[i] + "}\n\n");
		//add
		System.out.print("�迭�� ������ ���ڸ� �Է��ϼ��� >> ");
		num = sc.nextInt();
		int newArr[] = new int[numArr.length + 1];
		for (j = 0; j < newArr.length-1; j++) {
			if (num < numArr[j]) {
				newArr[j] = num;
				j++;
				break;
			}
			else
				newArr[j] = numArr[j];
		}
		while (j <= newArr.length-1) {
			newArr[j] = numArr[j-1];
			j++;
		}
		System.out.print("���ο� �迭 : {");
		for(i = 0; i < newArr.length-1; i++) {
			System.out.print(newArr[i] + ", ");
		}
		System.out.print(newArr[i] + "}\n\n");
		//delete
		System.out.print("������ ���ڸ� �Է��ϼ��� >> ");
		int del = sc.nextInt();
		int delArr[] = new int[newArr.length-1];
		
		for (i=0; i < delArr.length; i++) {
			if (del == newArr[i]) {
				break;
			}
			else delArr[i] = newArr[i];
		}
		while(i <= delArr.length-1) {
			delArr[i] = newArr[i+1];
			i++;
		}
		System.out.print("���� �� �迭 : {");
		for(i = 0; i < delArr.length-1; i++) {
			System.out.print(delArr[i] + ", ");
		}
		System.out.print(delArr[i] + "}\n\n");
		sc.close();
	}

}
