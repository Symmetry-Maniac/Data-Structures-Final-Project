#ifndef DATA_STRUCTURES_FINAL_PROJECT_BINARYSEARCH_H
#define DATA_STRUCTURES_FINAL_PROJECT_BINARYSEARCH_H


class BinaryNode;

class BinarySearchTree
{
private:
    BinaryNode *root;


public:
    /*!
     * \brief BinarySearchTree Constructor
     *
     */

    BinarySearchTree();

    /*!
     * \brief BinarySearchTree Destructor
     *
     */
    ~BinarySearchTree();

    /*!
     * \brief Insert data into the binary search tree
     *
     * This method allows us to insert data into the BST via
     * recursion.
     *
     *
     * \param[in] data Data to be inserted.
     *
     */

    void insert(int data);

    /*!
     * \brief Look up data in the binary search tree
     *
     * This method allows us determine if a specific
     * piece of data is in the tree.
     *
     * \return True if the data is in the tree, else false.
     *
     */

    bool lookup(int data);

    /*!
     *
     * \brief Post order print method to display the tree
     *
     * Transverse the left leaf in postorder.
     * Transverse the right leaf in postorder.
     * Visit the root.
     *
     */


    void postOrderPrint();

    /*!
     * \brief Pre order print method to display the tree
     *
     * Visit the root.
     * Transverse the left leaf in preorder.
     * Transverse the right leaf in preorder.
     *
     *
     */

    void preOrderPrint();

    /*!
     * \brief In order print method to display the tree
     *
     * Transverse the left leaf in inorder.
     * Visit the root.
     * Transverse the right leaf in inorder.
     *
     */
    void inOrderPrint();

    //More functions to come soon


    //Recursive Functions
    void inOrder(BinaryNode *node);

    void preOrder(BinaryNode *node);

    void postOrder(BinaryNode *node);

};

#endif //DATA_STRUCTURES_FINAL_PROJECT_BINARYSEARCH_H

