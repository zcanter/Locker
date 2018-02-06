```java
String updateAmount(int kc, String amt) {
  if (kc == 8) {
    return "0.00";
  } else {
    String[] arr = amt.split("");
    StringList numList = new StringList();
    for (int i = 0; i < arr.length; i++) {
      if (!arr[i].equals(".")) {
        numList.append(arr[i]);
      }
    }
    numList.append(str(int(str(key))));
    numList.insert(numList.size() - 2, ".");

    if (numList.get(0).equals("0")) {
      numList.remove(0);
    }
    amt = join(numList.array(), "");
  }
  return amt;
}
```
