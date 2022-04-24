package Week2;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileInOut {

	public static void main(String[] args) {
		try {
			File JavaFileIO = new File("sample.txt");
			if (JavaFileIO.createNewFile()) {
				try {
					FileWriter FW = new FileWriter("sample.txt");
					FW.write("�ƹ� ���ڳ� ���ϴ� ���� �Է��ϰ�, sample.txt�� �����ϼ���");
					FW.close();
				}  catch (IOException e) {
					System.out.println("An Error Occored!");
					e.printStackTrace();
				}
			}else {
			System.out.println("�̹� ���� �̸��� ������ �����մϴ�.");	
			}			
		} catch (IOException e) {
			System.out.println("An Error Occored!");
			e.printStackTrace();
		}
		
		try {
			File readObj = new File("sample.txt");
			Scanner scan = new Scanner(readObj);
			while (scan.hasNextLine()) {
				String data = scan.nextLine();
				System.out.println(data);
			}
		}  catch (FileNotFoundException e) {
			System.out.println("An Error Occored!");
			e.printStackTrace();
		}
	}

}
