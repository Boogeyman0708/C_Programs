import java.util.*;

class arraylist {

    public static void main(String args[]) {

        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(0);
        list.add(2);
        list.add(33);
        list.add(4);

        System.out.println(list);
        int elem = list.get(3);
        System.out.println(elem);

        list.add(1, 1);
        System.out.println(list);

        list.set(3, 3);
        System.out.println(list);

        int size = list.size();
        System.out.println(size);

        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + "\t");
        }
        ArrayList<Integer> list2 = new ArrayList<Integer>();
        for (int i = (list.size() - 1); i >= 0; i--) {

            list2.add(list.get(i));

        }
        System.out.println("\n" + list2);
        Collections.sort(list2);
        System.out.println(list2);

    }
}