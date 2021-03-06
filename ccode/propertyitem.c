/* propertyitem.c generated by valac 0.16.0, the Vala compiler
 * generated from propertyitem.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: propertyitem.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;
typedef struct _PropertyItemPrivate PropertyItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ParamSpecPropertyItem ParamSpecPropertyItem;

typedef enum  {
	PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND
} PropertyItemError;
#define PROPERTY_ITEM_ERROR property_item_error_quark ()
struct _PropertyItem {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertyItemPrivate * priv;
	gchar* name;
	gchar* description;
};

struct _PropertyItemClass {
	GTypeClass parent_class;
	void (*finalize) (PropertyItem *self);
	GtkWidget* (*create_widget) (PropertyItem* self);
	void (*read_widget) (PropertyItem* self, GtkWidget* propertyWidget);
};

struct _ParamSpecPropertyItem {
	GParamSpec parent_instance;
};


static gpointer property_item_parent_class = NULL;

GQuark property_item_error_quark (void);
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
enum  {
	PROPERTY_ITEM_DUMMY_PROPERTY
};
PropertyItem* property_item_construct (GType object_type, const gchar* name, const gchar* description);
GtkWidget* property_item_create_widget (PropertyItem* self);
static GtkWidget* property_item_real_create_widget (PropertyItem* self);
void property_item_read_widget (PropertyItem* self, GtkWidget* propertyWidget);
static void property_item_real_read_widget (PropertyItem* self, GtkWidget* propertyWidget);
static void property_item_finalize (PropertyItem* obj);


GQuark property_item_error_quark (void) {
	return g_quark_from_static_string ("property_item_error-quark");
}


PropertyItem* property_item_construct (GType object_type, const gchar* name, const gchar* description) {
	PropertyItem* self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (description != NULL, NULL);
	self = (PropertyItem*) g_type_create_instance (object_type);
	_tmp0_ = name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->name);
	self->name = _tmp1_;
	_tmp2_ = description;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->description);
	self->description = _tmp3_;
	return self;
}


static GtkWidget* property_item_real_create_widget (PropertyItem* self) {
	GtkWidget* result = NULL;
	GtkLabel* _tmp0_;
	GtkWidget* _tmp1_;
	_tmp0_ = (GtkLabel*) gtk_label_new ("This property cannot be edited manually.");
	_tmp1_ = (GtkWidget*) g_object_ref_sink (_tmp0_);
	result = _tmp1_;
	return result;
}


GtkWidget* property_item_create_widget (PropertyItem* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return PROPERTY_ITEM_GET_CLASS (self)->create_widget (self);
}


static void property_item_real_read_widget (PropertyItem* self, GtkWidget* propertyWidget) {
	g_return_if_fail (propertyWidget != NULL);
}


void property_item_read_widget (PropertyItem* self, GtkWidget* propertyWidget) {
	g_return_if_fail (self != NULL);
	PROPERTY_ITEM_GET_CLASS (self)->read_widget (self, propertyWidget);
}


static void value_property_item_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_property_item_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		property_item_unref (value->data[0].v_pointer);
	}
}


static void value_property_item_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = property_item_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_property_item_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_property_item_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		PropertyItem* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = property_item_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_property_item_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	PropertyItem** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = property_item_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecPropertyItem* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_PROPERTY_ITEM), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_property_item (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTY_ITEM), NULL);
	return value->data[0].v_pointer;
}


void value_set_property_item (GValue* value, gpointer v_object) {
	PropertyItem* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTY_ITEM));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTY_ITEM));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		property_item_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		property_item_unref (old);
	}
}


void value_take_property_item (GValue* value, gpointer v_object) {
	PropertyItem* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTY_ITEM));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTY_ITEM));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		property_item_unref (old);
	}
}


static void property_item_class_init (PropertyItemClass * klass) {
	property_item_parent_class = g_type_class_peek_parent (klass);
	PROPERTY_ITEM_CLASS (klass)->finalize = property_item_finalize;
	PROPERTY_ITEM_CLASS (klass)->create_widget = property_item_real_create_widget;
	PROPERTY_ITEM_CLASS (klass)->read_widget = property_item_real_read_widget;
}


static void property_item_instance_init (PropertyItem * self) {
	self->ref_count = 1;
}


static void property_item_finalize (PropertyItem* obj) {
	PropertyItem * self;
	self = PROPERTY_ITEM (obj);
	_g_free0 (self->name);
	_g_free0 (self->description);
}


GType property_item_get_type (void) {
	static volatile gsize property_item_type_id__volatile = 0;
	if (g_once_init_enter (&property_item_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_property_item_init, value_property_item_free_value, value_property_item_copy_value, value_property_item_peek_pointer, "p", value_property_item_collect_value, "p", value_property_item_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (PropertyItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) property_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertyItem), 0, (GInstanceInitFunc) property_item_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType property_item_type_id;
		property_item_type_id = g_type_register_fundamental (g_type_fundamental_next (), "PropertyItem", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&property_item_type_id__volatile, property_item_type_id);
	}
	return property_item_type_id__volatile;
}


gpointer property_item_ref (gpointer instance) {
	PropertyItem* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void property_item_unref (gpointer instance) {
	PropertyItem* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PROPERTY_ITEM_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



