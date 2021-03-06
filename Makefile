CC        := g++
LD        := g++

BUILD	  := build
SRC       := src

MAINMOD   := Main
CHARMOD   := Characters Characters/Nonplayables Characters/Playables Characters/CharacterFactory
SKILMOD   := Skills Skills/SkillList
CREWMOD   := Crews
MAPMOD    := Map

MODULES   := $(MAINMOD) $(CHARMOD) $(SKILMOD) $(CREWMOD) $(MAPMOD)
SRC_DIR   := $(addprefix $(SRC)/,$(MODULES))
BUILD_DIR := $(addprefix $(BUILD)/,$(MODULES))

SRC       := $(foreach sdir,$(SRC_DIR),$(wildcard $(sdir)/*.cpp))
OBJ       := $(patsubst $(SRC)/%.cpp,$(BUILD)/%.o,$(SRC))
INCLUDES  := $(addprefix -I,$(SRC_DIR))

vpath %.cpp $(SRC_DIR)

define make-goal
$1/%.o: %.cpp
	$(CC) $(INCLUDES) -c $$< -o $$@
endef

.PHONY: all checkdirs clean

all: checkdirs $(BUILD)/TheSpaceStation.exe

build/TheSpaceStation.exe: $(OBJ)
	$(LD) $^ -o $@

checkdirs: $(BUILD_DIR)

$(BUILD_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILD)

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))