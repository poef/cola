/* generated by Id 1.1 at �
 */
/* with the command: -I../stage1/ -c LargePositiveInteger.st -o ../stage2/LargePositiveInteger.o.c */

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
# define _backtrace()			"(no debugging information)\n"
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

static oop s_new_= 0;
static oop s_new_5f_= 0;
static oop s_maxVal= 0;
static oop s__3c_3d= 0;
static oop s_value_5f_= 0;
static oop s_negative= 0;
static oop s__5fimport_= 0;
static oop s_bytes= 0;
static oop s__5fbytes= 0;
static oop s_normalize= 0;
static oop s__2d= 0;
static oop s_ifTrue_= 0;
static oop s_to_do_= 0;
static oop s__2b= 0;
static oop s_downTo_do_= 0;
static oop s_size= 0;
static oop s_growTo_= 0;
static oop s_atAllPut_= 0;
static oop s_abs= 0;
static oop s__3d= 0;
static oop s_isLargePositiveInteger= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__5fintegerValue= 0;
static oop s_new= 0;
static oop s_digitLength= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s__3c= 0;
static oop s_digitAt_put_= 0;
static oop s_replaceFrom_to_with_startingAt_= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_highBitOfMagnitude= 0;
static oop s_highBitOfPositiveReceiver= 0;
static oop s__2a= 0;
static oop s_and_= 0;
static oop s_whileTrue_= 0;
static oop s_at_= 0;
static oop s_withBytes_= 0;
static oop s__7e_7e= 0;
static oop s_digitAt_= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new:", &s_new_ },
  { "new_:", &s_new_5f_ },
  { "maxVal", &s_maxVal },
  { "<=", &s__3c_3d },
  { "value_:", &s_value_5f_ },
  { "negative", &s_negative },
  { "_import:", &s__5fimport_ },
  { "bytes", &s_bytes },
  { "_bytes", &s__5fbytes },
  { "normalize", &s_normalize },
  { "-", &s__2d },
  { "ifTrue:", &s_ifTrue_ },
  { "to:do:", &s_to_do_ },
  { "+", &s__2b },
  { "downTo:do:", &s_downTo_do_ },
  { "size", &s_size },
  { "growTo:", &s_growTo_ },
  { "atAllPut:", &s_atAllPut_ },
  { "abs", &s_abs },
  { "=", &s__3d },
  { "isLargePositiveInteger", &s_isLargePositiveInteger },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "_integerValue", &s__5fintegerValue },
  { "new", &s_new },
  { "digitLength", &s_digitLength },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "<", &s__3c },
  { "digitAt:put:", &s_digitAt_put_ },
  { "replaceFrom:to:with:startingAt:", &s_replaceFrom_to_with_startingAt_ },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "highBitOfMagnitude", &s_highBitOfMagnitude },
  { "highBitOfPositiveReceiver", &s_highBitOfPositiveReceiver },
  { "*", &s__2a },
  { "and:", &s_and_ },
  { "whileTrue:", &s_whileTrue_ },
  { "at:", &s_at_ },
  { "withBytes:", &s_withBytes_ },
  { "~~", &s__7e_7e },
  { "digitAt:", &s_digitAt_ },
  { "at:put:", &s_at_put_ },
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
static oop l_5= 0;
static oop l_9= 0;
static oop l_11= 0;
static oop l_15= 0;
static oop l_19= 0;
static oop l_21= 0;
static oop l_22= 0;
static oop l_23= 0;
static oop l_25= 0;
static oop l_26= 0;
static oop l_28= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
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
static struct __methodinfo __info1= { "isLargePositiveInteger", "Object", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 25, 26, 0 };
static oop Object__isLargePositiveInteger(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isLargePositiveInteger", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 26, 28, &__info1 };
static oop LargePositiveInteger__isLargePositiveInteger(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(26);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "bytes", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 28, 30, &__info2 };
static oop LargePositiveInteger__bytes(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(28);
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "new:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 30, 37, &__info3 };
static oop LargePositiveInteger__new_(oop v__closure, oop v_stateful_self, oop v_self, oop v_length)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  _line(30);
  _1= v_self;
  _line(32);
  _1=_superv(v_Integer, s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_ByteArray;
  _2= v_length;
  _line(33);
  _1=_sendv(s_new_, 2, _1, _2);
  ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes= _1;
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _2= l_5;
  _line(34);
  _1=_sendv(s_atAllPut_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "withBytes:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 37, 43, &__info4 };
static oop LargePositiveInteger__withBytes_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aByteArray)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(37);
  _1= v_self;
  _line(39);
  _1=_superv(v_Integer, s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_aByteArray;
  ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "size_:value_:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 43, 48, &__info6 };
static oop LargePositiveInteger__size_5f_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__size, oop v__bytes)
 {
  _enter(&__info7);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(43);
  _1= v_self;
  _2= v_ByteArray;
  _3= v__size;
  _4= v__bytes;
  _line(45);
  _2=_sendv(s_size_5f_value_5f_, 3, _2, _3, _4);
  _line(45);
  _1=_sendv(s_withBytes_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "value_:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 48, 61, &__info7 };
static oop LargePositiveInteger__value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__word)
 {
  _enter(&__info8);
  oop v__bytes= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v__bytes;
  _line(48);
  _1= v_self;
  _2= l_9;
  _line(51);
  _1=_sendv(s_new_, 2, _1, _2);
  v_self= _1;
  v_stateful_self= _1;
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _line(52);
  _1=_sendv(s__5fbytes, 1, _1);
  v__bytes= _1;
 {
# define self ((struct t_LargePositiveInteger *)v_self)

	((unsigned char *)v__bytes)[0]= ((unsigned long)v__word >>  0) & 0xff;
	((unsigned char *)v__bytes)[1]= ((unsigned long)v__word >>  8) & 0xff;
	((unsigned char *)v__bytes)[2]= ((unsigned long)v__word >> 16) & 0xff;
	((unsigned char *)v__bytes)[3]= ((unsigned long)v__word >> 24) & 0xff;
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "_integerValue", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 61, 74, &__info8 };
static oop LargePositiveInteger___5fintegerValue(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop v__bytes= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  (void)v__bytes;
  _line(61);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _line(64);
  _2=_sendv(s_size, 1, _2);
  _3= l_11;
  _2= (_2 != _3) ? v_true : v_false;
  if (!_2) goto _l1;
 {
  _1= v_self;
  _line(64);
  _1=_superv(v_Integer, s__5fintegerValue, 1, _1);
  _leave();
  return _1;
 }
 _l1:;
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _line(65);
  _1=_sendv(s__5fbytes, 1, _1);
  v__bytes= _1;
 {
# define self ((struct t_LargePositiveInteger *)v_self)

	return (oop)(long)(   (((unsigned char *)v__bytes)[0]      )
		+	      (((unsigned char *)v__bytes)[1] <<  8)
		+	      (((unsigned char *)v__bytes)[2] << 16)
		+	      (((unsigned char *)v__bytes)[3] << 24) );
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "at:put:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 74, 79, &__info10 };
static oop LargePositiveInteger__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_index, oop v_aByte)
 {
  _enter(&__info12);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(74);
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _2= v_index;
  _3= v_aByte;
  _line(76);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "digitLength", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 79, 84, &__info12 };
static oop LargePositiveInteger__digitLength(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info13);
  oop _1= 0;
  _line(79);
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _line(81);
  _1=_sendv(s_size, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "digitAt:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 84, 89, &__info13 };
static oop LargePositiveInteger__digitAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_index)
 {
  _enter(&__info14);
  oop _1= 0;
  oop _2= 0;
  _line(84);
  /* ifTrue:ifFalse: */
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _line(86);
  _1=_sendv(s_size, 1, _1);
  _2= v_index;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
  if (!_1) goto _l2;
 {
  _1= l_15;
 }
  goto _l3;
 _l2:;
 {
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _2= v_index;
  _line(86);
  _1=_sendv(s_at_, 2, _1, _2);
 }
 _l3:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { "digitAt:put:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 89, 94, &__info14 };
static oop LargePositiveInteger__digitAt_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_index, oop v_value)
 {
  _enter(&__info16);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(89);
  _1= ((struct t_LargePositiveInteger *)v_stateful_self)->v_bytes;
  _2= v_index;
  _3= v_value;
  _line(91);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "[] replaceFrom:to:with:startingAt:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 94, 101, &__info16 };
static oop b_18(oop v__closure, oop v__self, oop v_index)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(96);
  _1= ((struct t_LargePositiveInteger *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1])->v_bytes;  /* bytes */
  _2= v_index;
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* anInteger */
  _4= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* startIndex */
  _line(97);
  _3=_sendv(s_digitAt_, 2, _3, _4);
  _line(97);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* startIndex */
  _2= l_19;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3]= _1;  /* startIndex */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "replaceFrom:to:with:startingAt:", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 94, 101, &__info18 };
static oop LargePositiveInteger__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_fromIndex, oop v_toIndex, oop v_anInteger, oop v_startIndex)
 {
  _enter(&__info17);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 5);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  ((oop *)_state1)[1]= v_stateful_self;
  ((oop *)_state1)[2]= v_anInteger;
  ((oop *)_state1)[3]= v_startIndex;
  _line(94);
  _1= v_fromIndex;
  _2= v_toIndex;
  /* Scope('index'->ArgumentVariableNode) */
  /* Scope('stateful_self'->ArgumentVariableNode 'fromIndex'->ArgumentVariableNode 'toIndex'->ArgumentVariableNode 'self'->ArgumentVariableNode 'bytes'->SlotVariableNode 'anInteger'->ArgumentVariableNode 'startIndex'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_18, 1, 0, ((oop *)_state1), 0);
  _line(96);
  _1=_sendv(s_to_do_, 3, _1, _2, _3);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "highBitOfMagnitude", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 101, 112, &__info17 };
static oop LargePositiveInteger__highBitOfMagnitude(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info20);
  oop v_realLength= 0;
  oop v_lastDigit= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_realLength;
  (void)v_lastDigit;
  _line(101);
  _1= v_self;
  _line(104);
  _1=_sendv(s_digitLength, 1, _1);
  v_realLength= _1;
  /* whileTrue: */
  goto _l5;
 _l4:;
 {
  /* ifTrue: */
  _1= 0;
  _2= v_realLength;
  _3= l_22;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2d, 2, _2, _3);
  }
  v_realLength= _2;
  _3= l_21;
  if (1 & (long)_2) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l6;
 {
  _1= l_21;
  _leave();
  return _1;
 }
 _l6:;
 }
 _l5:;
 {
  _1= v_self;
  _2= v_realLength;
  _line(105);
  _1=_sendv(s_digitAt_, 2, _1, _2);
  v_lastDigit= _1;
  _2= l_21;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
 }
  if (_1) goto _l4;
  _1= 0;
  _1= v_lastDigit;
  _line(109);
  _1=_sendv(s_highBitOfPositiveReceiver, 1, _1);
  _2= l_23;
  _3= v_realLength;
  _4= l_22;
  {
    int _l= (long)_3 >> 1;
    int _r= (long)_4 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_3) && ((_s ^ (_s << 1)) >= 0))  _3= (oop)(long)(_s << 1 | 1);  else _3= _sendv(s__2d, 2, _3, _4);
  }
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= (_l * _r);
    if ((1 & (long)_3) && ((_r == 0) || (_s / _r == _l)) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2a, 2, _2, _3);
  }
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info27= { "[] normalize", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 112, 133, &__info20 };
static oop b_27(oop v__closure, oop v__self, oop v_i)
 {
  _enter(&__info27);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(125);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* val */
  _2= l_28;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l * _r);
    if ((1 & (long)_1) && ((_r == 0) || (_s / _r == _l)) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2a, 2, _1, _2);
  }
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _3= v_i;
  _line(125);
  _2=_sendv(s_digitAt_, 2, _2, _3);
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1]= _1;  /* val */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info24= { "normalize", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 112, 133, &__info27 };
static oop LargePositiveInteger__normalize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info24);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 5);
  oop v_sLen= 0;
  oop v_len= 0;
  oop v_oldLen= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_sLen;
  (void)v_len;
  (void)v_oldLen;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _line(112);
  _1= ((oop *)_state1)[2];  /* self */
  _line(116);
  _1=_sendv(s_digitLength, 1, _1);
  v_oldLen= _1;
  v_len= _1;
  /* whileTrue: */
  goto _l8;
 _l7:;
 {
  _1= v_len;
  _2= l_26;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2d, 2, _1, _2);
  }
  v_len= _1;
 }
 _l8:;
 {
  /* ifTrue: */
  _1= 0;
  _2= v_len;
  _3= l_25;
  if (1 & (long)_2) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l9;
 {
  _1= l_25;
  _leave();
  return _1;
 }
 _l9:;
  _1= ((oop *)_state1)[2];  /* self */
  _2= v_len;
  _line(118);
  _1=_sendv(s_digitAt_, 2, _1, _2);
  _2= l_25;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
 }
  if (_1) goto _l7;
  _1= 0;
  _1= v_SmallInteger;
  _line(121);
  _1=_sendv(s_maxVal, 1, _1);
  _line(121);
  _1=_sendv(s_digitLength, 1, _1);
  v_sLen= _1;
  /* ifTrue: */
  _1= 0;
  /* and: */
  _2= v_len;
  _3= v_sLen;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l11;
 {
  _2= ((oop *)_state1)[2];  /* self */
  _3= v_sLen;
  _line(122);
  _2=_sendv(s_digitAt_, 2, _2, _3);
  _3= v_SmallInteger;
  _line(122);
  _3=_sendv(s_maxVal, 1, _3);
  _4= v_sLen;
  _line(122);
  _3=_sendv(s_digitAt_, 2, _3, _4);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
 }
 _l11:;
  if (!_2) goto _l10;
 {
  _1= l_25;
  ((oop *)_state1)[1]= _1;  /* val */
  _1= v_len;
  _2= l_26;
  /* Scope('i'->ArgumentVariableNode) */
  /* Scope('oldLen'->TemporaryVariableNode 'val'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'sLen'->TemporaryVariableNode 'bytes'->SlotVariableNode 'len'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_27, 1, 0, ((oop *)_state1), 0);
  _line(125);
  _1=_sendv(s_downTo_do_, 3, _1, _2, _3);
  _1= ((oop *)_state1)[1];  /* val */
  _leave();
  return _1;
 }
 _l10:;
  /* ifTrue:ifFalse: */
  _1= v_len;
  _2= v_oldLen;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
  if (!_1) goto _l12;
 {
  _1= ((oop *)_state1)[2];  /* self */
  _2= v_len;
  _line(129);
  _1=_sendv(s_growTo_, 2, _1, _2);
 }
  goto _l13;
 _l12:;
 {
  _1= ((oop *)_state1)[2];  /* self */
 }
 _l13:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info29= { "abs", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 133, 135, &__info24 };
static oop LargePositiveInteger__abs(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info29);
  oop _1= 0;
  _line(133);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info30= { "negative", "LargePositiveInteger", "/home/piumarta/src/idst/object/st80/LargePositiveInteger.st", 0, 135, 136, &__info29 };
static oop LargePositiveInteger__negative(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info30);
  oop _1= 0;
  _line(135);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "LargePositiveInteger.st", 0, 0, 0, &__info30 };
void __id__init__LargePositiveInteger(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "Integer", "__id__init__Integer");
  v__object= _libid->import("_object");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
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
  _libid->method(v_Object, s_isLargePositiveInteger, (_imp_t)Object__isLargePositiveInteger);
  _libid->method(v_LargePositiveInteger, s_isLargePositiveInteger, (_imp_t)LargePositiveInteger__isLargePositiveInteger);
  _libid->method(v_LargePositiveInteger, s_bytes, (_imp_t)LargePositiveInteger__bytes);
  l_5= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_LargePositiveInteger, s_new_, (_imp_t)LargePositiveInteger__new_);
  _libid->method(v_LargePositiveInteger, s_withBytes_, (_imp_t)LargePositiveInteger__withBytes_);
  _libid->method(v_LargePositiveInteger, s_size_5f_value_5f_, (_imp_t)LargePositiveInteger__size_5f_value_5f_);
  l_9= _sendv(s_value_5f_, 2, v_SmallInteger, 4);
  _libid->method(v_LargePositiveInteger, s_value_5f_, (_imp_t)LargePositiveInteger__value_5f_);
  l_11= _sendv(s_value_5f_, 2, v_SmallInteger, 4);
  _libid->method(v_LargePositiveInteger, s__5fintegerValue, (_imp_t)LargePositiveInteger___5fintegerValue);
  _libid->method(v_LargePositiveInteger, s_at_put_, (_imp_t)LargePositiveInteger__at_put_);
  _libid->method(v_LargePositiveInteger, s_digitLength, (_imp_t)LargePositiveInteger__digitLength);
  l_15= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_LargePositiveInteger, s_digitAt_, (_imp_t)LargePositiveInteger__digitAt_);
  _libid->method(v_LargePositiveInteger, s_digitAt_put_, (_imp_t)LargePositiveInteger__digitAt_put_);
  l_19= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_LargePositiveInteger, s_replaceFrom_to_with_startingAt_, (_imp_t)LargePositiveInteger__replaceFrom_to_with_startingAt_);
  l_21= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_22= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_23= _sendv(s_value_5f_, 2, v_SmallInteger, 8);
  _libid->method(v_LargePositiveInteger, s_highBitOfMagnitude, (_imp_t)LargePositiveInteger__highBitOfMagnitude);
  l_25= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_26= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_28= _sendv(s_value_5f_, 2, v_SmallInteger, 256);
  _libid->method(v_LargePositiveInteger, s_normalize, (_imp_t)LargePositiveInteger__normalize);
  _libid->method(v_LargePositiveInteger, s_abs, (_imp_t)LargePositiveInteger__abs);
  _libid->method(v_LargePositiveInteger, s_negative, (_imp_t)LargePositiveInteger__negative);
  _leave();
}
