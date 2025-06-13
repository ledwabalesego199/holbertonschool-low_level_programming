#!/bin/bash

# Create dog.h with the struct dog definition
cat > dog.h << 'HEADER_EOF'
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog;

#endif /* DOG_H */
HEADER_EOF

echo "✅ dog.h created."

# Check if inside a git repo
if [ ! -d ".git" ]; then
    echo "🌀 Git repo not found. Initializing..."
    git init
fi

# Add and commit the new header file
git add dog.h
git commit -m "Add dog.h: define struct dog with name, age, and owner"

# Ensure the remote is set
if ! git remote | grep -q origin; then
    echo "❗ No remote set. Use: git remote add origin <repo-URL>"
    exit 1
fi

# Push to main branch
git push origin main

echo "✅ dog.h committed and pushed to origin/main."
