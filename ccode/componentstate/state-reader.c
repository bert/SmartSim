/* state-reader.c generated by valac 0.16.0, the Vala compiler
 * generated from state-reader.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: componentstate/reader.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


#define TYPE_COMPONENT_STATE (component_state_get_type ())
#define COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_STATE, ComponentState))
#define COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_STATE, ComponentStateClass))
#define IS_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_STATE))
#define IS_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_STATE))
#define COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_STATE, ComponentStateClass))

typedef struct _ComponentState ComponentState;
typedef struct _ComponentStateClass ComponentStateClass;
typedef struct _ComponentStatePrivate ComponentStatePrivate;

#define TYPE_COMPILED_CIRCUIT (compiled_circuit_get_type ())
#define COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuit))
#define COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))
#define IS_COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPILED_CIRCUIT))
#define IS_COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPILED_CIRCUIT))
#define COMPILED_CIRCUIT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))

typedef struct _CompiledCircuit CompiledCircuit;
typedef struct _CompiledCircuitClass CompiledCircuitClass;

#define TYPE_COMPONENT_INST (component_inst_get_type ())
#define COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_INST, ComponentInst))
#define COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_INST, ComponentInstClass))
#define IS_COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_INST))
#define IS_COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_INST))
#define COMPONENT_INST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_INST, ComponentInstClass))

typedef struct _ComponentInst ComponentInst;
typedef struct _ComponentInstClass ComponentInstClass;

#define TYPE_READER_COMPONENT_STATE (reader_component_state_get_type ())
#define READER_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READER_COMPONENT_STATE, ReaderComponentState))
#define READER_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READER_COMPONENT_STATE, ReaderComponentStateClass))
#define IS_READER_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READER_COMPONENT_STATE))
#define IS_READER_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READER_COMPONENT_STATE))
#define READER_COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READER_COMPONENT_STATE, ReaderComponentStateClass))

typedef struct _ReaderComponentState ReaderComponentState;
typedef struct _ReaderComponentStateClass ReaderComponentStateClass;
typedef struct _ReaderComponentStatePrivate ReaderComponentStatePrivate;

#define TYPE_CONNECTION (connection_get_type ())
#define CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONNECTION, Connection))
#define CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONNECTION, ConnectionClass))
#define IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONNECTION))
#define IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONNECTION))
#define CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONNECTION, ConnectionClass))

typedef struct _Connection Connection;
typedef struct _ConnectionClass ConnectionClass;
#define _connection_unref0(var) ((var == NULL) ? NULL : (var = (connection_unref (var), NULL)))
#define _component_inst_unref0(var) ((var == NULL) ? NULL : (var = (component_inst_unref (var), NULL)))
typedef struct _ComponentInstPrivate ComponentInstPrivate;

#define TYPE_COMPONENT_DEF (component_def_get_type ())
#define COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_DEF, ComponentDef))
#define COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_DEF, ComponentDefClass))
#define IS_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_DEF))
#define IS_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_DEF))
#define COMPONENT_DEF_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_DEF, ComponentDefClass))

typedef struct _ComponentDef ComponentDef;
typedef struct _ComponentDefClass ComponentDefClass;

#define TYPE_DIRECTION (direction_get_type ())

#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;

#define TYPE_PIN_INST (pin_inst_get_type ())
#define PIN_INST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PIN_INST, PinInst))
#define PIN_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PIN_INST, PinInstClass))
#define IS_PIN_INST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PIN_INST))
#define IS_PIN_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PIN_INST))
#define PIN_INST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PIN_INST, PinInstClass))

typedef struct _PinInst PinInst;
typedef struct _PinInstClass PinInstClass;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _CompiledCircuitPrivate CompiledCircuitPrivate;

#define TYPE_CUSTOM_COMPONENT_DEF (custom_component_def_get_type ())
#define CUSTOM_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDef))
#define CUSTOM_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDefClass))
#define IS_CUSTOM_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CUSTOM_COMPONENT_DEF))
#define IS_CUSTOM_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CUSTOM_COMPONENT_DEF))
#define CUSTOM_COMPONENT_DEF_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDefClass))

typedef struct _CustomComponentDef CustomComponentDef;
typedef struct _CustomComponentDefClass CustomComponentDefClass;

#define TYPE_PROJECT (project_get_type ())
#define PROJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROJECT, Project))
#define PROJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROJECT, ProjectClass))
#define IS_PROJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROJECT))
#define IS_PROJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROJECT))
#define PROJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROJECT, ProjectClass))

typedef struct _Project Project;
typedef struct _ProjectClass ProjectClass;

#define TYPE_UPDATE_QUEUE (update_queue_get_type ())
#define UPDATE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_UPDATE_QUEUE, UpdateQueue))
#define UPDATE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_UPDATE_QUEUE, UpdateQueueClass))
#define IS_UPDATE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_UPDATE_QUEUE))
#define IS_UPDATE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_UPDATE_QUEUE))
#define UPDATE_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_UPDATE_QUEUE, UpdateQueueClass))

typedef struct _UpdateQueue UpdateQueue;
typedef struct _UpdateQueueClass UpdateQueueClass;

#define TYPE_WIRE_STATE (wire_state_get_type ())
#define WIRE_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_WIRE_STATE, WireState))
#define WIRE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_WIRE_STATE, WireStateClass))
#define IS_WIRE_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_WIRE_STATE))
#define IS_WIRE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_WIRE_STATE))
#define WIRE_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_WIRE_STATE, WireStateClass))

typedef struct _WireState WireState;
typedef struct _WireStateClass WireStateClass;

struct _ComponentState {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ComponentStatePrivate * priv;
	CompiledCircuit* compiledCircuit;
	ComponentInst** ancestry;
	gint ancestry_length1;
	ComponentInst* componentInst;
	gint renderQueueID;
	gint processQueueID;
	gboolean display;
};

struct _ComponentStateClass {
	GTypeClass parent_class;
	void (*finalize) (ComponentState *self);
	void (*update) (ComponentState* self);
	void (*click) (ComponentState* self);
	void (*render) (ComponentState* self, cairo_t* context);
	gboolean (*get_alwaysUpdate) (ComponentState* self);
};

struct _ReaderComponentState {
	ComponentState parent_instance;
	ReaderComponentStatePrivate * priv;
};

struct _ReaderComponentStateClass {
	ComponentStateClass parent_class;
};

struct _ReaderComponentStatePrivate {
	gboolean input;
	gboolean zState;
	Connection* inputWire;
};

typedef enum  {
	DIRECTION_NONE,
	DIRECTION_RIGHT,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_UP,
	DIRECTION_HORIZONTAL,
	DIRECTION_VERTICAL,
	DIRECTION_DIAGONAL
} Direction;

struct _ComponentInst {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ComponentInstPrivate * priv;
	ComponentDef* componentDef;
	gint myID;
	gint xPosition;
	gint yPosition;
	Direction direction;
	gboolean flipped;
	gint rightBound;
	gint downBound;
	gint leftBound;
	gint upBound;
	PropertySet* configuration;
	gboolean selected;
	gboolean errorMark;
	PinInst** pinInsts;
	gint pinInsts_length1;
};

struct _ComponentInstClass {
	GTypeClass parent_class;
	void (*finalize) (ComponentInst *self);
};

struct _CompiledCircuit {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CompiledCircuitPrivate * priv;
	CustomComponentDef* rootComponent;
	Project* project;
	UpdateQueue* renderWireStates;
	UpdateQueue* renderComponentStates;
	UpdateQueue* processWireStates;
	UpdateQueue* processComponentStates;
	CustomComponentDef* viewedComponent;
	gint iterationCount;
};

struct _CompiledCircuitClass {
	GTypeClass parent_class;
	void (*finalize) (CompiledCircuit *self);
};


static gpointer reader_component_state_parent_class = NULL;

gpointer component_state_ref (gpointer instance);
void component_state_unref (gpointer instance);
GParamSpec* param_spec_component_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_state (GValue* value, gpointer v_object);
void value_take_component_state (GValue* value, gpointer v_object);
gpointer value_get_component_state (const GValue* value);
GType component_state_get_type (void) G_GNUC_CONST;
gpointer compiled_circuit_ref (gpointer instance);
void compiled_circuit_unref (gpointer instance);
GParamSpec* param_spec_compiled_circuit (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_compiled_circuit (GValue* value, gpointer v_object);
void value_take_compiled_circuit (GValue* value, gpointer v_object);
gpointer value_get_compiled_circuit (const GValue* value);
GType compiled_circuit_get_type (void) G_GNUC_CONST;
gpointer component_inst_ref (gpointer instance);
void component_inst_unref (gpointer instance);
GParamSpec* param_spec_component_inst (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_inst (GValue* value, gpointer v_object);
void value_take_component_inst (GValue* value, gpointer v_object);
gpointer value_get_component_inst (const GValue* value);
GType component_inst_get_type (void) G_GNUC_CONST;
GType reader_component_state_get_type (void) G_GNUC_CONST;
gpointer connection_ref (gpointer instance);
void connection_unref (gpointer instance);
GParamSpec* param_spec_connection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_connection (GValue* value, gpointer v_object);
void value_take_connection (GValue* value, gpointer v_object);
gpointer value_get_connection (const GValue* value);
GType connection_get_type (void) G_GNUC_CONST;
#define READER_COMPONENT_STATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_READER_COMPONENT_STATE, ReaderComponentStatePrivate))
enum  {
	READER_COMPONENT_STATE_DUMMY_PROPERTY
};
ReaderComponentState* reader_component_state_new (Connection* inputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ReaderComponentState* reader_component_state_construct (GType object_type, Connection* inputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ComponentState* component_state_construct (GType object_type);
void connection_set_affects (Connection* self, ComponentState* componentState);
static ComponentInst** _vala_array_dup85 (ComponentInst** self, int length);
static void reader_component_state_real_render (ComponentState* base, cairo_t* context);
gpointer component_def_ref (gpointer instance);
void component_def_unref (gpointer instance);
GParamSpec* param_spec_component_def (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_def (GValue* value, gpointer v_object);
void value_take_component_def (GValue* value, gpointer v_object);
gpointer value_get_component_def (const GValue* value);
GType component_def_get_type (void) G_GNUC_CONST;
GType direction_get_type (void) G_GNUC_CONST;
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
gpointer pin_inst_ref (gpointer instance);
void pin_inst_unref (gpointer instance);
GParamSpec* param_spec_pin_inst (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_pin_inst (GValue* value, gpointer v_object);
void value_take_pin_inst (GValue* value, gpointer v_object);
gpointer value_get_pin_inst (const GValue* value);
GType pin_inst_get_type (void) G_GNUC_CONST;
static void reader_component_state_real_update (ComponentState* base);
gboolean connection_get_signalState (Connection* self);
gint connection_get_users (Connection* self);
GType custom_component_def_get_type (void) G_GNUC_CONST;
gpointer project_ref (gpointer instance);
void project_unref (gpointer instance);
GParamSpec* param_spec_project (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_project (GValue* value, gpointer v_object);
void value_take_project (GValue* value, gpointer v_object);
gpointer value_get_project (const GValue* value);
GType project_get_type (void) G_GNUC_CONST;
gpointer update_queue_ref (gpointer instance);
void update_queue_unref (gpointer instance);
GParamSpec* param_spec_update_queue (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_update_queue (GValue* value, gpointer v_object);
void value_take_update_queue (GValue* value, gpointer v_object);
gpointer value_get_update_queue (const GValue* value);
GType update_queue_get_type (void) G_GNUC_CONST;
gpointer wire_state_ref (gpointer instance);
void wire_state_unref (gpointer instance);
GParamSpec* param_spec_wire_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_wire_state (GValue* value, gpointer v_object);
void value_take_wire_state (GValue* value, gpointer v_object);
gpointer value_get_wire_state (const GValue* value);
GType wire_state_get_type (void) G_GNUC_CONST;
void update_queue_add_element (UpdateQueue* self, gint elementNumber);
static void reader_component_state_finalize (ComponentState* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _connection_ref0 (gpointer self) {
	return self ? connection_ref (self) : NULL;
}


static gpointer _component_inst_ref0 (gpointer self) {
	return self ? component_inst_ref (self) : NULL;
}


static ComponentInst** _vala_array_dup85 (ComponentInst** self, int length) {
	ComponentInst** result;
	int i;
	result = g_new0 (ComponentInst*, length + 1);
	for (i = 0; i < length; i++) {
		ComponentInst* _tmp0_;
		_tmp0_ = _component_inst_ref0 (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


ReaderComponentState* reader_component_state_construct (GType object_type, Connection* inputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	ReaderComponentState* self = NULL;
	Connection* _tmp0_;
	Connection* _tmp1_;
	Connection* _tmp2_;
	ComponentInst** _tmp3_;
	gint _tmp3__length1;
	ComponentInst** _tmp4_;
	gint _tmp4__length1;
	ComponentInst* _tmp5_;
	ComponentInst* _tmp6_;
	g_return_val_if_fail (inputWire != NULL, NULL);
	g_return_val_if_fail (componentInst != NULL, NULL);
	self = (ReaderComponentState*) component_state_construct (object_type);
	_tmp0_ = inputWire;
	_tmp1_ = _connection_ref0 (_tmp0_);
	_connection_unref0 (self->priv->inputWire);
	self->priv->inputWire = _tmp1_;
	_tmp2_ = inputWire;
	connection_set_affects (_tmp2_, (ComponentState*) self);
	self->priv->input = FALSE;
	self->priv->zState = TRUE;
	_tmp3_ = ancestry;
	_tmp3__length1 = ancestry_length1;
	_tmp4_ = (_tmp3_ != NULL) ? _vala_array_dup85 (_tmp3_, _tmp3__length1) : ((gpointer) _tmp3_);
	_tmp4__length1 = _tmp3__length1;
	((ComponentState*) self)->ancestry = (_vala_array_free (((ComponentState*) self)->ancestry, ((ComponentState*) self)->ancestry_length1, (GDestroyNotify) component_inst_unref), NULL);
	((ComponentState*) self)->ancestry = _tmp4_;
	((ComponentState*) self)->ancestry_length1 = _tmp4__length1;
	_tmp5_ = componentInst;
	_tmp6_ = _component_inst_ref0 (_tmp5_);
	_component_inst_unref0 (((ComponentState*) self)->componentInst);
	((ComponentState*) self)->componentInst = _tmp6_;
	return self;
}


ReaderComponentState* reader_component_state_new (Connection* inputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	return reader_component_state_construct (TYPE_READER_COMPONENT_STATE, inputWire, ancestry, ancestry_length1, componentInst);
}


static void reader_component_state_real_render (ComponentState* base, cairo_t* context) {
	ReaderComponentState * self;
	gchar* text = NULL;
	cairo_matrix_t oldmatrix = {0};
	cairo_t* _tmp0_;
	cairo_matrix_t _tmp1_ = {0};
	cairo_t* _tmp2_;
	ComponentInst* _tmp3_;
	gint _tmp4_;
	ComponentInst* _tmp5_;
	gint _tmp6_;
	cairo_t* _tmp7_;
	gboolean _tmp8_;
	cairo_text_extents_t textExtents = {0};
	cairo_t* _tmp13_;
	cairo_t* _tmp14_;
	const gchar* _tmp15_;
	cairo_text_extents_t _tmp16_ = {0};
	cairo_t* _tmp17_;
	cairo_t* _tmp18_;
	cairo_t* _tmp19_;
	cairo_t* _tmp20_;
	cairo_t* _tmp21_;
	cairo_t* _tmp22_;
	cairo_t* _tmp23_;
	gboolean _tmp24_;
	cairo_t* _tmp29_;
	cairo_text_extents_t _tmp30_;
	gdouble _tmp31_;
	cairo_text_extents_t _tmp32_;
	gdouble _tmp33_;
	cairo_t* _tmp34_;
	const gchar* _tmp35_;
	cairo_t* _tmp36_;
	cairo_matrix_t _tmp37_;
	self = (ReaderComponentState*) base;
	g_return_if_fail (context != NULL);
	_tmp0_ = context;
	cairo_get_matrix (_tmp0_, &_tmp1_);
	oldmatrix = _tmp1_;
	_tmp2_ = context;
	_tmp3_ = ((ComponentState*) self)->componentInst;
	_tmp4_ = _tmp3_->xPosition;
	_tmp5_ = ((ComponentState*) self)->componentInst;
	_tmp6_ = _tmp5_->yPosition;
	cairo_translate (_tmp2_, (gdouble) _tmp4_, (gdouble) _tmp6_);
	_tmp7_ = context;
	cairo_set_source_rgb (_tmp7_, 1.0, 1.0, 1.0);
	_tmp8_ = self->priv->zState;
	if (_tmp8_) {
		gchar* _tmp9_;
		_tmp9_ = g_strdup ("Z");
		_g_free0 (text);
		text = _tmp9_;
	} else {
		gboolean _tmp10_;
		_tmp10_ = self->priv->input;
		if (_tmp10_) {
			gchar* _tmp11_;
			_tmp11_ = g_strdup ("1");
			_g_free0 (text);
			text = _tmp11_;
		} else {
			gchar* _tmp12_;
			_tmp12_ = g_strdup ("0");
			_g_free0 (text);
			text = _tmp12_;
		}
	}
	_tmp13_ = context;
	cairo_set_font_size (_tmp13_, (gdouble) 16);
	_tmp14_ = context;
	_tmp15_ = text;
	cairo_text_extents (_tmp14_, _tmp15_, &_tmp16_);
	textExtents = _tmp16_;
	_tmp17_ = context;
	cairo_move_to (_tmp17_, (gdouble) (-10), (gdouble) (+10));
	_tmp18_ = context;
	cairo_line_to (_tmp18_, (gdouble) (+10), (gdouble) (+10));
	_tmp19_ = context;
	cairo_line_to (_tmp19_, (gdouble) (+10), (gdouble) (-10));
	_tmp20_ = context;
	cairo_line_to (_tmp20_, (gdouble) (-10), (gdouble) (-10));
	_tmp21_ = context;
	cairo_line_to (_tmp21_, (gdouble) (-10), (gdouble) (+10));
	_tmp22_ = context;
	cairo_fill (_tmp22_);
	_tmp23_ = context;
	cairo_stroke (_tmp23_);
	_tmp24_ = self->priv->zState;
	if (_tmp24_) {
		cairo_t* _tmp25_;
		_tmp25_ = context;
		cairo_set_source_rgb (_tmp25_, (gdouble) 0, 1.0, (gdouble) 0);
	} else {
		gboolean _tmp26_;
		_tmp26_ = self->priv->input;
		if (_tmp26_) {
			cairo_t* _tmp27_;
			_tmp27_ = context;
			cairo_set_source_rgb (_tmp27_, 1.0, (gdouble) 0, (gdouble) 0);
		} else {
			cairo_t* _tmp28_;
			_tmp28_ = context;
			cairo_set_source_rgb (_tmp28_, (gdouble) 0, (gdouble) 0, 1.0);
		}
	}
	_tmp29_ = context;
	_tmp30_ = textExtents;
	_tmp31_ = _tmp30_.width;
	_tmp32_ = textExtents;
	_tmp33_ = _tmp32_.height;
	cairo_move_to (_tmp29_, (-_tmp31_) / 2, (+_tmp33_) / 2);
	_tmp34_ = context;
	_tmp35_ = text;
	cairo_show_text (_tmp34_, _tmp35_);
	_tmp36_ = context;
	_tmp37_ = oldmatrix;
	cairo_set_matrix (_tmp36_, &_tmp37_);
	_g_free0 (text);
}


static void reader_component_state_real_update (ComponentState* base) {
	ReaderComponentState * self;
	gboolean _tmp0_;
	Connection* _tmp14_;
	gboolean _tmp15_;
	gboolean _tmp16_;
	Connection* _tmp17_;
	gint _tmp18_;
	gint _tmp19_;
	self = (ReaderComponentState*) base;
	_tmp0_ = ((ComponentState*) self)->display;
	if (_tmp0_) {
		gboolean _tmp1_ = FALSE;
		gboolean _tmp2_;
		Connection* _tmp3_;
		gboolean _tmp4_;
		gboolean _tmp5_;
		gboolean _tmp10_;
		_tmp2_ = self->priv->input;
		_tmp3_ = self->priv->inputWire;
		_tmp4_ = connection_get_signalState (_tmp3_);
		_tmp5_ = _tmp4_;
		if (_tmp2_ != _tmp5_) {
			_tmp1_ = TRUE;
		} else {
			gboolean _tmp6_;
			Connection* _tmp7_;
			gint _tmp8_;
			gint _tmp9_;
			_tmp6_ = self->priv->zState;
			_tmp7_ = self->priv->inputWire;
			_tmp8_ = connection_get_users (_tmp7_);
			_tmp9_ = _tmp8_;
			_tmp1_ = _tmp6_ != (_tmp9_ == 0);
		}
		_tmp10_ = _tmp1_;
		if (_tmp10_) {
			CompiledCircuit* _tmp11_;
			UpdateQueue* _tmp12_;
			gint _tmp13_;
			_tmp11_ = ((ComponentState*) self)->compiledCircuit;
			_tmp12_ = _tmp11_->renderComponentStates;
			_tmp13_ = ((ComponentState*) self)->renderQueueID;
			update_queue_add_element (_tmp12_, _tmp13_);
		}
	}
	_tmp14_ = self->priv->inputWire;
	_tmp15_ = connection_get_signalState (_tmp14_);
	_tmp16_ = _tmp15_;
	self->priv->input = _tmp16_;
	_tmp17_ = self->priv->inputWire;
	_tmp18_ = connection_get_users (_tmp17_);
	_tmp19_ = _tmp18_;
	self->priv->zState = _tmp19_ == 0;
}


static void reader_component_state_class_init (ReaderComponentStateClass * klass) {
	reader_component_state_parent_class = g_type_class_peek_parent (klass);
	COMPONENT_STATE_CLASS (klass)->finalize = reader_component_state_finalize;
	g_type_class_add_private (klass, sizeof (ReaderComponentStatePrivate));
	COMPONENT_STATE_CLASS (klass)->render = reader_component_state_real_render;
	COMPONENT_STATE_CLASS (klass)->update = reader_component_state_real_update;
}


static void reader_component_state_instance_init (ReaderComponentState * self) {
	self->priv = READER_COMPONENT_STATE_GET_PRIVATE (self);
}


static void reader_component_state_finalize (ComponentState* obj) {
	ReaderComponentState * self;
	self = READER_COMPONENT_STATE (obj);
	_connection_unref0 (self->priv->inputWire);
	COMPONENT_STATE_CLASS (reader_component_state_parent_class)->finalize (obj);
}


GType reader_component_state_get_type (void) {
	static volatile gsize reader_component_state_type_id__volatile = 0;
	if (g_once_init_enter (&reader_component_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ReaderComponentStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) reader_component_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ReaderComponentState), 0, (GInstanceInitFunc) reader_component_state_instance_init, NULL };
		GType reader_component_state_type_id;
		reader_component_state_type_id = g_type_register_static (TYPE_COMPONENT_STATE, "ReaderComponentState", &g_define_type_info, 0);
		g_once_init_leave (&reader_component_state_type_id__volatile, reader_component_state_type_id);
	}
	return reader_component_state_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



