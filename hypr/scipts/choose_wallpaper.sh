#!/bin/bash

WALLPAPER_DIR="$HOME/Pictures/wallpapers/"

# List all files in the wallpaper directory
FILES=$(ls "$WALLPAPER_DIR")

SELECTED_FILE=$(echo "$FILES" | fzf --height=~50% --border=double)

# Check if a file was selected and set it as the wallpaper
if [ -n "$SELECTED_FILE" ]; then
  swww img "$WALLPAPER_DIR/$SELECTED_FILE" && wal -i "$WALLPAPER_DIR/$SELECTED_FILE"
else
  echo "No file selected."
fi

