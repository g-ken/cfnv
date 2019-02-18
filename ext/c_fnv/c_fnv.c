#include <ruby.h>
#include <stdint.h>
#include <string.h>

static VALUE

fnv_fnv132(VALUE self, VALUE arg) {
  char *str = NULL;
  uint32_t offset_basis = 2166136261U;
  uint32_t cFNV_PRIME = 16777619U;
  uint32_t hash = 0;
  int i;

  Check_Type(arg, T_STRING);
  str = StringValuePtr(arg);
  int len = strlen(str);
  hash = offset_basis;
  for (i = 0; i < len; i++) {
    hash *= cFNV_PRIME;
    hash ^= str[i];
  }
  return INT2FIX(hash);
}

fnv_fnv1a32(VALUE self, VALUE arg) {
  char *str = NULL;
  uint32_t offset_basis = 2166136261U;
  uint32_t cFNV_PRIME = 16777619U;
  uint32_t hash = 0;
  int i;

  Check_Type(arg, T_STRING);
  str = StringValuePtr(arg);
  int len = strlen(str);
  hash = offset_basis;
  for (i = 0; i < len; i++) {
    hash ^= str[i];
    hash *= cFNV_PRIME;
  }
  return INT2FIX(hash);
}

void Init_fnv() {
  /*Fnv classを定義*/
  VALUE cFnv = rb_define_class("CFnv", rb_cObject);
  /*fnv132 methodを定義*/
  rb_define_method(cFnv, "fnv132", fnv_fnv132, 1);
  rb_define_method(cFnv, "fnv132", fnv_fnv1a32, 1);
  rb_define_method(cFnv, "fnv132", fnv_fnv164, 1);
  rb_define_method(cFnv, "fnv132", fnv_fnv1a64, 1);
}