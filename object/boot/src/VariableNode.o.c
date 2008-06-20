/* generated by Id 1.1 at � */
/* with the command: -I../stage1/ -I../st80 -c VariableNode.st -o ../stage2/VariableNode.o.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
  typedef HINSTANCE dlhandle_t;
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

struct __send;
typedef oop (*_imp_t)(struct __send *_send, ...);

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s__5fimport_= 0;
static oop s_isThis= 0;
static oop s_println_= 0;
static oop s_push= 0;
static oop s__5fslots= 0;
static oop s_isSuper= 0;
static oop s__3d= 0;
static oop s_withName_position_= 0;
static oop s_withPosition_= 0;
static oop s_isVariableNode= 0;
static oop s__5fdebugName= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_encode_position_= 0;
static oop s_encodeLvalue_location_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_isFree= 0;
static oop s_generate_freeIn_location_= 0;
static oop s_generate_location_= 0;
static oop s_generateStore_= 0;
static oop s_generateStore_freeIn_location_= 0;
static oop s_generateStore_location_= 0;
static oop s_printIndent_= 0;
static oop s_name= 0;
static oop s_encode_= 0;
static oop s_generate_= 0;
static oop s__5fsizeof= 0;
static oop s_level= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "_import:", &s__5fimport_ },
  { "isThis", &s_isThis },
  { "println:", &s_println_ },
  { "push", &s_push },
  { "_slots", &s__5fslots },
  { "isSuper", &s_isSuper },
  { "=", &s__3d },
  { "withName:position:", &s_withName_position_ },
  { "withPosition:", &s_withPosition_ },
  { "isVariableNode", &s_isVariableNode },
  { "_debugName", &s__5fdebugName },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "encode:position:", &s_encode_position_ },
  { "encodeLvalue:location:", &s_encodeLvalue_location_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "isFree", &s_isFree },
  { "generate:freeIn:location:", &s_generate_freeIn_location_ },
  { "generate:location:", &s_generate_location_ },
  { "generateStore:", &s_generateStore_ },
  { "generateStore:freeIn:location:", &s_generateStore_freeIn_location_ },
  { "generateStore:location:", &s_generateStore_location_ },
  { "printIndent:", &s_printIndent_ },
  { "name", &s_name },
  { "encode:", &s_encode_ },
  { "generate:", &s_generate_ },
  { "_sizeof", &s__5fsizeof },
  { "level", &s_level },
  { "println", &s_println },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
struct t_VariableNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
  oop v_variable;
  oop v_level;
};
static oop l_6= 0;
static oop l_9= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_ParseNode= 0;
static oop v_VariableNode= 0;
static size_t VariableNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_VariableNode); }
static char *VariableNode___5fdebugName(oop _closure, oop v_self) { return "VariableNode"; }
static struct __slotinfo *VariableNode___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "position", 0, 4 }, { "location", 4, 4 }, { "name", 8, 4 }, { "variable", 12, 4 }, { "level", 16, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "isVariableNode", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 30, 31, 0 };
static oop VariableNode__isVariableNode(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(30);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isVariableNode", "ParseNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 31, 33, &__info1 };
static oop ParseNode__isVariableNode(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(31);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "withName:position:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 33, 39, &__info2 };
static oop VariableNode__withName_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_nameString, oop v_aPosition)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(33);
  _1= v_self;
  _2= v_aPosition;
  _line(35);
  _1=_sendv(s_withPosition_, 2, _1, _2);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_nameString;
  ((struct t_VariableNode *)v_stateful_self)->v_name= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "name", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 39, 41, &__info3 };
static oop VariableNode__name(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(39);
  _1= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "isSuper", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 41, 42, &__info4 };
static oop VariableNode__isSuper(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  _line(41);
  _1= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _2= l_6;
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "isSuper", "ParseNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 42, 44, &__info5 };
static oop ParseNode__isSuper(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(42);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "isThis", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 44, 45, &__info7 };
static oop VariableNode__isThis(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  _line(44);
  _1= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _2= l_9;
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "isThis", "ParseNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 45, 47, &__info8 };
static oop ParseNode__isThis(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop _1= 0;
  _line(45);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "encode:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 47, 55, &__info10 };
static oop VariableNode__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder)
 {
  _enter(&__info11);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(47);
  _1= v_encoder;
  _2= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_position;
  _line(50);
  _1=_sendv(s_encode_position_, 3, _1, _2, _3);
  ((struct t_VariableNode *)v_stateful_self)->v_variable= _1;
  _1= v_encoder;
  _line(51);
  _1=_sendv(s_level, 1, _1);
  ((struct t_VariableNode *)v_stateful_self)->v_level= _1;
  _1= v_encoder;
  _line(52);
  _1=_sendv(s_push, 1, _1);
  ((struct t_VariableNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "encodeLvalue:location:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 55, 63, &__info11 };
static oop VariableNode__encodeLvalue_location_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder, oop v_aLocation)
 {
  _enter(&__info12);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(55);
  _1= v_encoder;
  _2= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_position;
  _line(58);
  _1=_sendv(s_encode_position_, 3, _1, _2, _3);
  ((struct t_VariableNode *)v_stateful_self)->v_variable= _1;
  _1= v_encoder;
  _line(59);
  _1=_sendv(s_level, 1, _1);
  ((struct t_VariableNode *)v_stateful_self)->v_level= _1;
  _1= v_aLocation;
  ((struct t_VariableNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "generate:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 63, 70, &__info12 };
static oop VariableNode__generate_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info13);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(63);
  /* ifTrue:ifFalse: */
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _line(65);
  _1=_sendv(s_isFree, 1, _1);
  if (!_1) goto _l1;
 {
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _2= v_gen;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_level;
  _4= ((struct t_VariableNode *)v_stateful_self)->v_location;
  _line(66);
  _1=_sendv(s_generate_freeIn_location_, 4, _1, _2, _3, _4);
 }
  goto _l2;
 _l1:;
 {
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _2= v_gen;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_location;
  _line(67);
  _1=_sendv(s_generate_location_, 3, _1, _2, _3);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "generateStore:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 70, 77, &__info13 };
static oop VariableNode__generateStore_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info14);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(70);
  /* ifTrue:ifFalse: */
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _line(72);
  _1=_sendv(s_isFree, 1, _1);
  if (!_1) goto _l3;
 {
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _2= v_gen;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_level;
  _4= ((struct t_VariableNode *)v_stateful_self)->v_location;
  _line(73);
  _1=_sendv(s_generateStore_freeIn_location_, 4, _1, _2, _3, _4);
 }
  goto _l4;
 _l3:;
 {
  _1= ((struct t_VariableNode *)v_stateful_self)->v_variable;
  _2= v_gen;
  _3= ((struct t_VariableNode *)v_stateful_self)->v_location;
  _line(74);
  _1=_sendv(s_generateStore_location_, 3, _1, _2, _3);
 }
 _l4:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "println:", "VariableNode", "/Users/piumarta/src/idst/object/idc/VariableNode.st", 0, 77, 82, &__info14 };
static oop VariableNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter(&__info15);
  oop _1= 0;
  oop _2= 0;
  _line(77);
  _1= v_self;
  _2= v_indent;
  _line(79);
  _1=_sendv(s_printIndent_, 2, _1, _2);
  _1= ((struct t_VariableNode *)v_stateful_self)->v_name;
  _line(80);
  _1=_sendv(s_println, 1, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "VariableNode.st", 0, 0, 0, &__info15 };
void __id__init__VariableNode(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info1);

  _sendv(s__5fimport_, 3, _libid->_object, "ParseNode", "__id__init__ParseNode");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  v_ParseNode= _libid->import("ParseNode");
  v_VariableNode= _libid->proto2(v_ParseNode, VariableNode___5fsizeof(0, 0));
  _libid->method(v_VariableNode, s__5fsizeof, (_imp_t)VariableNode___5fsizeof);
  _libid->method(v_VariableNode, s__5fdebugName, (_imp_t)VariableNode___5fdebugName);
  _libid->method(v_VariableNode, s__5fslots, (_imp_t)VariableNode___5fslots);
  _libid->export("VariableNode", v_VariableNode);
  _libid->method(v_VariableNode, s_isVariableNode, (_imp_t)VariableNode__isVariableNode);
  _libid->method(v_ParseNode, s_isVariableNode, (_imp_t)ParseNode__isVariableNode);
  _libid->method(v_VariableNode, s_withName_position_, (_imp_t)VariableNode__withName_position_);
  _libid->method(v_VariableNode, s_name, (_imp_t)VariableNode__name);
  l_6= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 5, "super");
  _libid->method(v_VariableNode, s_isSuper, (_imp_t)VariableNode__isSuper);
  _libid->method(v_ParseNode, s_isSuper, (_imp_t)ParseNode__isSuper);
  l_9= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 4, "this");
  _libid->method(v_VariableNode, s_isThis, (_imp_t)VariableNode__isThis);
  _libid->method(v_ParseNode, s_isThis, (_imp_t)ParseNode__isThis);
  _libid->method(v_VariableNode, s_encode_, (_imp_t)VariableNode__encode_);
  _libid->method(v_VariableNode, s_encodeLvalue_location_, (_imp_t)VariableNode__encodeLvalue_location_);
  _libid->method(v_VariableNode, s_generate_, (_imp_t)VariableNode__generate_);
  _libid->method(v_VariableNode, s_generateStore_, (_imp_t)VariableNode__generateStore_);
  _libid->method(v_VariableNode, s_println_, (_imp_t)VariableNode__println_);
  _leave();
}
