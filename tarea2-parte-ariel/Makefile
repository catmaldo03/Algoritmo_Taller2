CC=gcc
CFLAGS=-Wall

SRCDIR=src
BINDIR=build

SRCS=$(wildcard $(SRCDIR)/*.c)
BINS=$(patsubst $(SRCDIR)/%.c,$(BINDIR)/%.out,$(SRCS))

all: $(BINS)

$(BINDIR)/%.out: $(SRCDIR)/%.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $<

$(BINDIR):
	mkdir -p $(BINDIR)

clean:
	rm -rf $(BINDIR)
