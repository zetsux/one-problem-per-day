# --- Makefile ---

# Root directory (you can change this if needed)
ROOT_DIR := $(shell pwd)

# Get the latest day number from existing folders (e.g., D1_, D23_, etc.)
LATEST_DAY := $(shell ls -d $(ROOT_DIR)/D*_*/ 2>/dev/null | grep -oE 'D[0-9]+' | sed 's/D//' | sort -n | tail -1)

# Compute next day number (default to 1 if none exist)
NEXT_DAY := $(shell expr $(or $(LATEST_DAY),0) + 1)

# Format folder name (zero-padded day number, e.g. D001_LeetCode_117)
NEW_DIR := D$(shell printf "%03d" $(NEXT_DAY))_$(PLATFORM)_$(PROBLEM)

# Detect default editor (VSCode fallback)
EDITOR ?= code

# Default target
.PHONY: new
new:
	@if [ -z "$(PLATFORM)" ] || [ -z "$(PROBLEM)" ] || [ -z "$(EXT)" ]; then \
		echo "❌ Usage: make new PLATFORM=<platform> PROBLEM=<problem_number> EXT=<extension>"; \
		exit 1; \
	fi
	@echo "🛠️ Creating new problem folder: $(NEW_DIR)"
	@mkdir -p $(ROOT_DIR)/$(NEW_DIR)
	@touch $(ROOT_DIR)/$(NEW_DIR)/README.md
	@touch $(ROOT_DIR)/$(NEW_DIR)/$(PLATFORM)_$(PROBLEM).$(EXT)
	@echo "# $(PLATFORM) $(PROBLEM)" > $(ROOT_DIR)/$(NEW_DIR)/README.md
	@echo "✅ Created folder: $(NEW_DIR)"
	@echo "🚀 Opening in $(EDITOR)..."
	@$(EDITOR) $(ROOT_DIR)/$(NEW_DIR)/$(PLATFORM)_$(PROBLEM).$(EXT) $(ROOT_DIR)/$(NEW_DIR)/README.md
	@echo "🎉 All set. Happy solving!"
