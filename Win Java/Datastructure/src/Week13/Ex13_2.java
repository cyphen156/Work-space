package Week13;

public class Ex13_2 {

	public static void main(String[] args) {
		BinarySearchTree bsT = new BinarySearchTree();
		bsT.insertBST('G');
		bsT.insertBST('I');
		bsT.insertBST('H');
		bsT.insertBST('D');
		bsT.insertBST('B');
		bsT.insertBST('M');
		bsT.insertBST('N');
		bsT.insertBST('A');
		bsT.insertBST('J');
		bsT.insertBST('E');
		bsT.insertBST('Q');
		
		System.out.printf("\nBinary Tree >>> ");
		bsT.printBST();
		
		System.out.printf("Is There \"A\" ? >>>");
		TreeNode p1 = bsT.searchBST('A');
		if(p1 != null)
			System.out.printf("Searching Success! Searched key : %c \n", p1.data);
		else
			System.out.printf("Searching fail!! \n");
		
		System.out.printf("Is There \"Z\"? >>>");
		TreeNode p2 = bsT.searchBST('Z');
		if(p2 != null)
			System.out.printf("Searching Success! Searched key : %c \n", p2.data);
		else
			System.out.printf("Searching fail!! \n");
	}
}

class TreeNode{
	char data;
	TreeNode left;
	TreeNode right;
}

class BinarySearchTree{
	private TreeNode root = new TreeNode();
	
	public TreeNode insertKey(TreeNode root, char x) {//Ű�ι��� x���� ����Ʈ���ȿ� �����մϴ�.
		TreeNode p = root; //��Ʈ���� p�� �����س���
		TreeNode newNode = new TreeNode();//���ο� ��带 �����մϴ�
		newNode.data = x; //������ ��忡 x���� �����ϰ�
		newNode.left = null; //�ϴ� ���� �ڽĳ�带 null,
		newNode.right = null; //���� �ڽĳ�嵵 null�� �����մϴ�
		if (p == null) //���� ��Ʈ�� null�̸� �� ��带 ��Ʈ�� �����ϰ�,
			return newNode;
		else if(newNode.data < p.data) {//���� ���� ������ ����� ���� ��Ʈ�� ������ ������ ��Ʈ�� ���� �ڽĳ�忡 �� ��带 �����ϰ�, 
			p.left = insertKey(p.left, x);
			return p;
		}
		else if(newNode.data > p.data) {//���� ������ ����� ���� ��Ʈ�� ������ ũ�� ��Ʈ�� ������ �ڽĳ�忡 �� ��带 �����մϴ�.
			p.right = insertKey(p.right, x);
			return p;
		}
		else return p;// �� ��� ���� ����� ����Ʈ���� �������ݴϴ�.
	}
	
	public void insertBST(char x) {//������ ���� Ʈ���� x��� ���� �����մϴ�.
		root = insertKey(root, x);//insertKey�޼ҵ带 �ҷ��� ����Ʈ�� ��Ʈ�ؿ� x��� ��带 �����ؼ� �����մϴ�.
	}
	
	public TreeNode searchBST(char x) {// x ���� ����Ʈ�� ���ο� �����ϴ��� Ž���մϴ�.
		TreeNode p = root;//Ž���� Ʈ���� ��尪�� �����ͼ�
		while (p != null) {//Ʈ���� ��尡 null�� �� ������ Ž���ϴµ�
			if(x < p.data)//Ž���� ���� ���� ��ġ�� ��Ʈ��尪���� ���� ���
				p = p.left; //��Ʈ�� ��ġ�� ��Ʈ ���� �ڽ� ���� �ű�ϴ�.
				else if(x > p.data)//Ž���� ���� ���� ��ġ�� ��Ʈ��尪���� Ŭ ���
					p = p.right; //��Ʈ�� ��ġ�� ��Ʈ ������ �ڽ� ���� �ű�ϴ�.
			else return p;//��Ʈ����� ���� Ž���� ���� ���� ��� ��� ���� �״�� �������ݴϴ�. 
		}
		return p;//ã�� ����� ���� �������ݴϴ�.
	}
	
	public void inorder(TreeNode root) {//������ �����մϴ�.
		if(root != null) {//���� Ʈ���� ��Ʈ���� null�� �ƴ� ���
			inorder(root.left);//����Ʈ���� �� ���� ������ ã�Ƽ�
			System.out.printf(" %c", root.data);//����� ���� ������ְ�
			inorder(root.right);//��Ʈ ���� �� ���� ã�Ƽ� ������ݴϴ�.
		}
	}
	
	public void printBST() {//���� Ʈ�� ��ü�� ������ݴϴ�.
		inorder(root);
		System.out.println();
	}
}
