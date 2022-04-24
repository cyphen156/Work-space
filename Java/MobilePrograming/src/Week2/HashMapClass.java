package Week2;

import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.Map.Entry;

public class HashMapClass {

	public static void main(String[] args) {
		Entry<String, Integer> maxEntry = null;
		Scanner scan = new Scanner(System.in);
		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		System.out.println("���� �̸��� �α��� 3�� �Է��ϼ���. (��: Korea 5000)");
		System.out.print("���� �̸�, �α� >> ");
		nations.put(scan.next(), scan.nextInt());
		System.out.println();
		System.out.print("���� �̸�, �α� >> ");
		nations.put(scan.next(), scan.nextInt());
		System.out.println();
		System.out.print("���� �̸�, �α� >> ");
		nations.put(scan.next(), scan.nextInt());
		System.out.println();
	    Set<Entry<String, Integer>> entrySet = nations.entrySet();
	    for (Entry<String, Integer> entry : entrySet) {
	    	if ( maxEntry == null || entry.getValue() > maxEntry.getValue() )
	    		maxEntry = entry;
	    }
		System.out.print("���� �α��� ���� ����� (" + maxEntry.getKey() + maxEntry.getValue() + ")");
		scan.close();
	}

}

