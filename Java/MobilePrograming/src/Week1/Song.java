package Week1;

public class Song {
	private String title;
	
	public Song(String title) {
		this.title = title;
	}
	
	String getTitle() {
		return title;
	}
	
	public static void main(String[] args) {
		Song mySong = new Song("Let it go");
		Song yourSong = new Song("������Ÿ��");
		System.out.println("�� �뷡�� " + mySong.getTitle());
		System.out.println("�� �뷡�� " + yourSong.getTitle());
	}

}
