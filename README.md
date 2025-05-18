# Postorder-Morris-Traversal

# 🌲 Morris Postorder Traversal — O(1) Space | Binary Tree 💻

Experience postorder traversal like never before — no recursion, no stack, just pure threading magic! 🧙  
This project uses the **Morris Traversal** technique to achieve **Postorder Traversal** in **O(1) space**.

---

## 📌 What is Postorder Traversal?

Postorder traversal processes nodes in the order:

Left ➝ Right ➝ Root


---

## 💡 What is Morris Traversal?

Morris Traversal avoids extra space by:
- Threading the tree (temporarily modifying pointers)
- Traversing without recursion or an auxiliary stack
- Reconstructing original tree structure after traversal

---

## 🧠 How Does It Work?

We modify the tree to follow this order temporarily:

Root ➝ Right ➝ Left


Then reverse the result to get correct postorder:


---

## 🧾 Algorithm Steps

1. While root is not `nullptr`:
   - If there’s a right child:
     - Find the **leftmost node** in the right subtree.
     - If it hasn’t been threaded:
       - Thread it back to current root.
       - Visit root and move to the right.
     - If already threaded:
       - Remove thread and move to the left.
   - Else:
     - Visit root and move to the left.
2. After traversal, **reverse the result**.

---

## 📈 Time & Space Complexity

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  | ✅ (In-place traversal)

---

## 🔍 Example

```cpp


  1
 / \
2   3
     \
      4

✅ Postorder: [2, 4, 3, 1]

```

---

## ✍️ Author

**Ridham Garg**  
🧠 Writing space-efficient tree traversals like a boss! 😎

---

## 🔖 Topics Covered

- Binary Trees 🌳
- Tree Traversal 🔁
- Postorder Traversal 📤
- Morris Traversal 🚀
- Threaded Trees 🔗

---

🎯 Give this repo a ⭐ if it saved your memory (and your day)!  
Happy coding! 💻✨
