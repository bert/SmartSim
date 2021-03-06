/* state-clock.c generated by valac 0.16.0, the Vala compiler
 * generated from state-clock.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: componentstate/clock.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>


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

#define TYPE_CLOCK_COMPONENT_STATE (clock_component_state_get_type ())
#define CLOCK_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CLOCK_COMPONENT_STATE, ClockComponentState))
#define CLOCK_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CLOCK_COMPONENT_STATE, ClockComponentStateClass))
#define IS_CLOCK_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CLOCK_COMPONENT_STATE))
#define IS_CLOCK_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CLOCK_COMPONENT_STATE))
#define CLOCK_COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CLOCK_COMPONENT_STATE, ClockComponentStateClass))

typedef struct _ClockComponentState ClockComponentState;
typedef struct _ClockComponentStateClass ClockComponentStateClass;
typedef struct _ClockComponentStatePrivate ClockComponentStatePrivate;

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

struct _ClockComponentState {
	ComponentState parent_instance;
	ClockComponentStatePrivate * priv;
};

struct _ClockComponentStateClass {
	ComponentStateClass parent_class;
};

struct _ClockComponentStatePrivate {
	gboolean output;
	Connection* outputWire;
	gint nextToggle;
	gint onFor;
	gint offFor;
};


static gpointer clock_component_state_parent_class = NULL;

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
GType clock_component_state_get_type (void) G_GNUC_CONST;
gpointer connection_ref (gpointer instance);
void connection_unref (gpointer instance);
GParamSpec* param_spec_connection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_connection (GValue* value, gpointer v_object);
void value_take_connection (GValue* value, gpointer v_object);
gpointer value_get_connection (const GValue* value);
GType connection_get_type (void) G_GNUC_CONST;
#define CLOCK_COMPONENT_STATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_CLOCK_COMPONENT_STATE, ClockComponentStatePrivate))
enum  {
	CLOCK_COMPONENT_STATE_DUMMY_PROPERTY
};
ClockComponentState* clock_component_state_new (Connection* outputWire, gint onFor, gint offFor, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ClockComponentState* clock_component_state_construct (GType object_type, Connection* outputWire, gint onFor, gint offFor, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ComponentState* component_state_construct (GType object_type);
static ComponentInst** _vala_array_dup74 (ComponentInst** self, int length);
static void clock_component_state_real_update (ComponentState* base);
void connection_set_signalState (Connection* self, gboolean value);
static void clock_component_state_finalize (ComponentState* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _connection_ref0 (gpointer self) {
	return self ? connection_ref (self) : NULL;
}


static gpointer _component_inst_ref0 (gpointer self) {
	return self ? component_inst_ref (self) : NULL;
}


static ComponentInst** _vala_array_dup74 (ComponentInst** self, int length) {
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


ClockComponentState* clock_component_state_construct (GType object_type, Connection* outputWire, gint onFor, gint offFor, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	ClockComponentState* self = NULL;
	Connection* _tmp0_;
	Connection* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	ComponentInst** _tmp5_;
	gint _tmp5__length1;
	ComponentInst** _tmp6_;
	gint _tmp6__length1;
	ComponentInst* _tmp7_;
	ComponentInst* _tmp8_;
	g_return_val_if_fail (outputWire != NULL, NULL);
	g_return_val_if_fail (componentInst != NULL, NULL);
	self = (ClockComponentState*) component_state_construct (object_type);
	_tmp0_ = outputWire;
	_tmp1_ = _connection_ref0 (_tmp0_);
	_connection_unref0 (self->priv->outputWire);
	self->priv->outputWire = _tmp1_;
	_tmp2_ = onFor;
	self->priv->onFor = _tmp2_;
	_tmp3_ = offFor;
	self->priv->offFor = _tmp3_;
	_tmp4_ = offFor;
	self->priv->nextToggle = _tmp4_;
	self->priv->output = FALSE;
	_tmp5_ = ancestry;
	_tmp5__length1 = ancestry_length1;
	_tmp6_ = (_tmp5_ != NULL) ? _vala_array_dup74 (_tmp5_, _tmp5__length1) : ((gpointer) _tmp5_);
	_tmp6__length1 = _tmp5__length1;
	((ComponentState*) self)->ancestry = (_vala_array_free (((ComponentState*) self)->ancestry, ((ComponentState*) self)->ancestry_length1, (GDestroyNotify) component_inst_unref), NULL);
	((ComponentState*) self)->ancestry = _tmp6_;
	((ComponentState*) self)->ancestry_length1 = _tmp6__length1;
	_tmp7_ = componentInst;
	_tmp8_ = _component_inst_ref0 (_tmp7_);
	_component_inst_unref0 (((ComponentState*) self)->componentInst);
	((ComponentState*) self)->componentInst = _tmp8_;
	return self;
}


ClockComponentState* clock_component_state_new (Connection* outputWire, gint onFor, gint offFor, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	return clock_component_state_construct (TYPE_CLOCK_COMPONENT_STATE, outputWire, onFor, offFor, ancestry, ancestry_length1, componentInst);
}


static void clock_component_state_real_update (ComponentState* base) {
	ClockComponentState * self;
	gint _tmp0_;
	gint _tmp4_;
	Connection* _tmp5_;
	gboolean _tmp6_;
	self = (ClockComponentState*) base;
	_tmp0_ = self->priv->nextToggle;
	if (_tmp0_ == 0) {
		gboolean _tmp1_;
		_tmp1_ = self->priv->output;
		if (_tmp1_) {
			gint _tmp2_;
			self->priv->output = FALSE;
			_tmp2_ = self->priv->offFor;
			self->priv->nextToggle = _tmp2_;
		} else {
			gint _tmp3_;
			self->priv->output = TRUE;
			_tmp3_ = self->priv->onFor;
			self->priv->nextToggle = _tmp3_;
		}
	}
	_tmp4_ = self->priv->nextToggle;
	self->priv->nextToggle = _tmp4_ - 1;
	_tmp5_ = self->priv->outputWire;
	_tmp6_ = self->priv->output;
	connection_set_signalState (_tmp5_, _tmp6_);
}


static gboolean clock_component_state_real_get_alwaysUpdate (ComponentState* base) {
	gboolean result;
	ClockComponentState* self;
	self = (ClockComponentState*) base;
	result = TRUE;
	return result;
}


static void clock_component_state_class_init (ClockComponentStateClass * klass) {
	clock_component_state_parent_class = g_type_class_peek_parent (klass);
	COMPONENT_STATE_CLASS (klass)->finalize = clock_component_state_finalize;
	g_type_class_add_private (klass, sizeof (ClockComponentStatePrivate));
	COMPONENT_STATE_CLASS (klass)->update = clock_component_state_real_update;
	COMPONENT_STATE_CLASS (klass)->get_alwaysUpdate = clock_component_state_real_get_alwaysUpdate;
}


static void clock_component_state_instance_init (ClockComponentState * self) {
	self->priv = CLOCK_COMPONENT_STATE_GET_PRIVATE (self);
}


static void clock_component_state_finalize (ComponentState* obj) {
	ClockComponentState * self;
	self = CLOCK_COMPONENT_STATE (obj);
	_connection_unref0 (self->priv->outputWire);
	COMPONENT_STATE_CLASS (clock_component_state_parent_class)->finalize (obj);
}


GType clock_component_state_get_type (void) {
	static volatile gsize clock_component_state_type_id__volatile = 0;
	if (g_once_init_enter (&clock_component_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ClockComponentStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) clock_component_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ClockComponentState), 0, (GInstanceInitFunc) clock_component_state_instance_init, NULL };
		GType clock_component_state_type_id;
		clock_component_state_type_id = g_type_register_static (TYPE_COMPONENT_STATE, "ClockComponentState", &g_define_type_info, 0);
		g_once_init_leave (&clock_component_state_type_id__volatile, clock_component_state_type_id);
	}
	return clock_component_state_type_id__volatile;
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



