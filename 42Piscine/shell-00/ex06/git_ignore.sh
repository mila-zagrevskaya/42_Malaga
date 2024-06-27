find . -exec git check-ignore {} + | xargs -I{} basename {}
.DS_Store
