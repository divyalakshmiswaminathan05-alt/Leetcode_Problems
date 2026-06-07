/**
 * Definition for a binary tree node.
 */

struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* createBinaryTree(int** descriptions,
                                  int descriptionsSize,
                                  int* descriptionsColSize) {

    struct TreeNode* nodes[100001] = {0};
    int isChild[100001] = {0};

    for (int i = 0; i < descriptionsSize; i++) {
        int parent = descriptions[i][0];
        int child = descriptions[i][1];
        int isLeft = descriptions[i][2];

        if (nodes[parent] == NULL)
            nodes[parent] = createNode(parent);

        if (nodes[child] == NULL)
            nodes[child] = createNode(child);

        if (isLeft)
            nodes[parent]->left = nodes[child];
        else
            nodes[parent]->right = nodes[child];

        isChild[child] = 1;
    }

    for (int i = 0; i < descriptionsSize; i++) {
        int parent = descriptions[i][0];

        if (!isChild[parent])
            return nodes[parent];
    }

    return NULL;
}