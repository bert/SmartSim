/* propertiesquery.c generated by valac 0.16.0, the Vala compiler
 * generated from propertiesquery.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: propertiesquery.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_PROPERTIES_QUERY (properties_query_get_type ())
#define PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTIES_QUERY, PropertiesQuery))
#define PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))
#define IS_PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTIES_QUERY))
#define IS_PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTIES_QUERY))
#define PROPERTIES_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))

typedef struct _PropertiesQuery PropertiesQuery;
typedef struct _PropertiesQueryClass PropertiesQueryClass;
typedef struct _PropertiesQueryPrivate PropertiesQueryPrivate;

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
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _PropertyItemPrivate PropertyItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _PropertySetPrivate PropertySetPrivate;
typedef struct _ParamSpecPropertiesQuery ParamSpecPropertiesQuery;

struct _PropertiesQuery {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertiesQueryPrivate * priv;
};

struct _PropertiesQueryClass {
	GTypeClass parent_class;
	void (*finalize) (PropertiesQuery *self);
};

struct _PropertiesQueryPrivate {
	PropertySet* propertySet;
	GtkDialog* dialog;
	GtkLabel* titleNameLabel;
	GtkLabel* titleDescriptionLabel;
	GtkVBox** propertyVBoxes;
	gint propertyVBoxes_length1;
	gint _propertyVBoxes_size_;
	GtkLabel** nameLabels;
	gint nameLabels_length1;
	gint _nameLabels_size_;
	GtkLabel** descriptionLabels;
	gint descriptionLabels_length1;
	gint _descriptionLabels_size_;
	GtkWidget** propertyWidgets;
	gint propertyWidgets_length1;
	gint _propertyWidgets_size_;
	GtkButton* applyButton;
	GtkButton* cancelButton;
};

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

struct _PropertySet {
	PropertyItem parent_instance;
	PropertySetPrivate * priv;
	PropertyItem** propertyItems;
	gint propertyItems_length1;
};

struct _PropertySetClass {
	PropertyItemClass parent_class;
};

struct _ParamSpecPropertiesQuery {
	GParamSpec parent_instance;
};


static gpointer properties_query_parent_class = NULL;

gpointer properties_query_ref (gpointer instance);
void properties_query_unref (gpointer instance);
GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_properties_query (GValue* value, gpointer v_object);
void value_take_properties_query (GValue* value, gpointer v_object);
gpointer value_get_properties_query (const GValue* value);
GType properties_query_get_type (void) G_GNUC_CONST;
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
#define PROPERTIES_QUERY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROPERTIES_QUERY, PropertiesQueryPrivate))
enum  {
	PROPERTIES_QUERY_DUMMY_PROPERTY
};
PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet);
PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet);
static void _vala_array_add60 (GtkVBox*** array, int* length, int* size, GtkVBox* value);
static void _vala_array_add61 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
static void _vala_array_add62 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
GtkWidget* property_item_create_widget (PropertyItem* self);
static void _vala_array_add63 (GtkWidget*** array, int* length, int* size, GtkWidget* value);
void properties_query_response_handler (PropertiesQuery* self, gint response_id);
static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);
gboolean properties_query_apply_changes (PropertiesQuery* self);
gint properties_query_run (PropertiesQuery* self);
void property_item_read_widget (PropertyItem* self, GtkWidget* propertyWidget);
static void properties_query_finalize (PropertiesQuery* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
 * Creates a new PropertyQuery with the title //title//, openned by
 * //parent//, to edit //propertySet//.
 */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gpointer _property_item_ref0 (gpointer self) {
	return self ? property_item_ref (self) : NULL;
}


static void _vala_array_add60 (GtkVBox*** array, int* length, int* size, GtkVBox* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkVBox*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add61 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add62 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add63 (GtkWidget*** array, int* length, int* size, GtkWidget* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkWidget*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
	properties_query_response_handler (self, response_id);
}


PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	PropertiesQuery* self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp7_;
	GtkWindow* _tmp8_;
	GtkDialog* _tmp9_;
	GtkDialog* _tmp10_;
	GtkDialog* _tmp11_;
	GtkWidget* _tmp12_ = NULL;
	GtkBox* _tmp13_;
	GtkBox* content;
	GtkDialog* _tmp14_;
	GtkDialog* _tmp15_;
	PropertySet* _tmp16_;
	const gchar* _tmp17_;
	GtkLabel* _tmp18_;
	GtkLabel* _tmp19_;
	PropertySet* _tmp20_;
	const gchar* _tmp21_;
	GtkLabel* _tmp22_;
	GtkLabel* _tmp23_;
	GtkBox* _tmp24_;
	GtkLabel* _tmp25_;
	GtkBox* _tmp26_;
	GtkLabel* _tmp27_;
	GtkDialog* _tmp77_;
	GtkButton* _tmp78_;
	GtkButton* _tmp79_;
	GtkDialog* _tmp80_;
	GtkButton* _tmp81_;
	GtkButton* _tmp82_;
	GtkButton* _tmp83_;
	GtkDialog* _tmp84_;
	GtkButton* _tmp85_;
	PropertySet* _tmp86_;
	PropertySet* _tmp87_;
	GtkDialog* _tmp88_;
	g_return_val_if_fail (propertySet != NULL, NULL);
	self = (PropertiesQuery*) g_type_create_instance (object_type);
	_tmp0_ = title;
	_tmp1_ = g_strdup (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	if (_tmp3_ == NULL) {
		PropertySet* _tmp4_;
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp4_ = propertySet;
		_tmp5_ = ((PropertyItem*) _tmp4_)->name;
		_tmp6_ = g_strconcat ("Properties - ", _tmp5_, NULL);
		_g_free0 (_tmp2_);
		_tmp2_ = _tmp6_;
	}
	_tmp7_ = _tmp2_;
	_tmp8_ = parent;
	_tmp9_ = (GtkDialog*) gtk_dialog_new_with_buttons (_tmp7_, _tmp8_, GTK_DIALOG_MODAL, NULL);
	_tmp10_ = g_object_ref_sink (_tmp9_);
	_g_object_unref0 (self->priv->dialog);
	self->priv->dialog = _tmp10_;
	_tmp11_ = self->priv->dialog;
	_tmp12_ = gtk_dialog_get_content_area (_tmp11_);
	_tmp13_ = _g_object_ref0 (GTK_IS_BOX (_tmp12_) ? ((GtkBox*) _tmp12_) : NULL);
	content = _tmp13_;
	_tmp14_ = self->priv->dialog;
	gtk_window_set_default_size ((GtkWindow*) _tmp14_, 200, 150);
	_tmp15_ = self->priv->dialog;
	gtk_container_set_border_width ((GtkContainer*) _tmp15_, (guint) 1);
	_tmp16_ = propertySet;
	_tmp17_ = ((PropertyItem*) _tmp16_)->name;
	_tmp18_ = (GtkLabel*) gtk_label_new (_tmp17_);
	_tmp19_ = g_object_ref_sink (_tmp18_);
	_g_object_unref0 (self->priv->titleNameLabel);
	self->priv->titleNameLabel = _tmp19_;
	_tmp20_ = propertySet;
	_tmp21_ = ((PropertyItem*) _tmp20_)->description;
	_tmp22_ = (GtkLabel*) gtk_label_new (_tmp21_);
	_tmp23_ = g_object_ref_sink (_tmp22_);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->titleDescriptionLabel = _tmp23_;
	_tmp24_ = content;
	_tmp25_ = self->priv->titleNameLabel;
	gtk_box_pack_start (_tmp24_, (GtkWidget*) _tmp25_, FALSE, TRUE, (guint) 1);
	_tmp26_ = content;
	_tmp27_ = self->priv->titleDescriptionLabel;
	gtk_box_pack_start (_tmp26_, (GtkWidget*) _tmp27_, FALSE, TRUE, (guint) 1);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp28_;
			_tmp28_ = TRUE;
			while (TRUE) {
				gboolean _tmp29_;
				gint _tmp31_;
				PropertySet* _tmp32_;
				PropertyItem** _tmp33_;
				gint _tmp33__length1;
				PropertySet* _tmp34_;
				PropertyItem** _tmp35_;
				gint _tmp35__length1;
				gint _tmp36_;
				PropertyItem* _tmp37_;
				PropertyItem* _tmp38_;
				PropertyItem* propertyItem;
				PropertyItem* _tmp39_;
				const gchar* _tmp40_;
				gchar* _tmp41_;
				gchar* name;
				PropertyItem* _tmp42_;
				const gchar* _tmp43_;
				gchar* _tmp44_;
				gchar* description;
				GtkVBox* _tmp45_;
				GtkVBox* _tmp46_;
				GtkVBox* propertyVBox;
				GtkVBox** _tmp47_;
				gint _tmp47__length1;
				GtkVBox* _tmp48_;
				GtkVBox* _tmp49_;
				const gchar* _tmp50_;
				GtkLabel* _tmp51_;
				GtkLabel* _tmp52_;
				GtkLabel* nameLabel;
				GtkLabel** _tmp53_;
				gint _tmp53__length1;
				GtkLabel* _tmp54_;
				GtkLabel* _tmp55_;
				const gchar* _tmp56_;
				GtkLabel* _tmp57_;
				GtkLabel* _tmp58_;
				GtkLabel* descriptionLabel;
				GtkLabel* _tmp59_;
				GtkLabel** _tmp60_;
				gint _tmp60__length1;
				GtkLabel* _tmp61_;
				GtkLabel* _tmp62_;
				GtkVBox* _tmp63_;
				GtkLabel* _tmp64_;
				const gchar* _tmp65_;
				PropertyItem* _tmp68_;
				GtkWidget* _tmp69_ = NULL;
				GtkWidget* propertyWidget;
				GtkWidget** _tmp70_;
				gint _tmp70__length1;
				GtkWidget* _tmp71_;
				GtkWidget* _tmp72_;
				GtkVBox* _tmp73_;
				GtkWidget* _tmp74_;
				GtkBox* _tmp75_;
				GtkVBox* _tmp76_;
				_tmp29_ = _tmp28_;
				if (!_tmp29_) {
					gint _tmp30_;
					_tmp30_ = i;
					i = _tmp30_ + 1;
				}
				_tmp28_ = FALSE;
				_tmp31_ = i;
				_tmp32_ = propertySet;
				_tmp33_ = _tmp32_->propertyItems;
				_tmp33__length1 = _tmp32_->propertyItems_length1;
				if (!(_tmp31_ < _tmp33__length1)) {
					break;
				}
				_tmp34_ = propertySet;
				_tmp35_ = _tmp34_->propertyItems;
				_tmp35__length1 = _tmp34_->propertyItems_length1;
				_tmp36_ = i;
				_tmp37_ = _tmp35_[_tmp36_];
				_tmp38_ = _property_item_ref0 (_tmp37_);
				propertyItem = _tmp38_;
				_tmp39_ = propertyItem;
				_tmp40_ = _tmp39_->name;
				_tmp41_ = g_strdup (_tmp40_);
				name = _tmp41_;
				_tmp42_ = propertyItem;
				_tmp43_ = _tmp42_->description;
				_tmp44_ = g_strdup (_tmp43_);
				description = _tmp44_;
				_tmp45_ = (GtkVBox*) gtk_vbox_new (FALSE, 1);
				_tmp46_ = g_object_ref_sink (_tmp45_);
				propertyVBox = _tmp46_;
				_tmp47_ = self->priv->propertyVBoxes;
				_tmp47__length1 = self->priv->propertyVBoxes_length1;
				_tmp48_ = propertyVBox;
				_tmp49_ = _g_object_ref0 (_tmp48_);
				_vala_array_add60 (&self->priv->propertyVBoxes, &self->priv->propertyVBoxes_length1, &self->priv->_propertyVBoxes_size_, _tmp49_);
				_tmp50_ = name;
				_tmp51_ = (GtkLabel*) gtk_label_new (_tmp50_);
				_tmp52_ = g_object_ref_sink (_tmp51_);
				nameLabel = _tmp52_;
				_tmp53_ = self->priv->nameLabels;
				_tmp53__length1 = self->priv->nameLabels_length1;
				_tmp54_ = nameLabel;
				_tmp55_ = _g_object_ref0 (_tmp54_);
				_vala_array_add61 (&self->priv->nameLabels, &self->priv->nameLabels_length1, &self->priv->_nameLabels_size_, _tmp55_);
				_tmp56_ = description;
				_tmp57_ = (GtkLabel*) gtk_label_new (_tmp56_);
				_tmp58_ = g_object_ref_sink (_tmp57_);
				descriptionLabel = _tmp58_;
				_tmp59_ = descriptionLabel;
				g_object_set (_tmp59_, "wrap", TRUE, NULL);
				_tmp60_ = self->priv->descriptionLabels;
				_tmp60__length1 = self->priv->descriptionLabels_length1;
				_tmp61_ = descriptionLabel;
				_tmp62_ = _g_object_ref0 (_tmp61_);
				_vala_array_add62 (&self->priv->descriptionLabels, &self->priv->descriptionLabels_length1, &self->priv->_descriptionLabels_size_, _tmp62_);
				_tmp63_ = propertyVBox;
				_tmp64_ = nameLabel;
				gtk_box_pack_start ((GtkBox*) _tmp63_, (GtkWidget*) _tmp64_, FALSE, TRUE, (guint) 1);
				_tmp65_ = description;
				if (g_strcmp0 (_tmp65_, "") != 0) {
					GtkVBox* _tmp66_;
					GtkLabel* _tmp67_;
					_tmp66_ = propertyVBox;
					_tmp67_ = descriptionLabel;
					gtk_box_pack_start ((GtkBox*) _tmp66_, (GtkWidget*) _tmp67_, FALSE, TRUE, (guint) 1);
				}
				_tmp68_ = propertyItem;
				_tmp69_ = property_item_create_widget (_tmp68_);
				propertyWidget = _tmp69_;
				_tmp70_ = self->priv->propertyWidgets;
				_tmp70__length1 = self->priv->propertyWidgets_length1;
				_tmp71_ = propertyWidget;
				_tmp72_ = _g_object_ref0 (_tmp71_);
				_vala_array_add63 (&self->priv->propertyWidgets, &self->priv->propertyWidgets_length1, &self->priv->_propertyWidgets_size_, _tmp72_);
				_tmp73_ = propertyVBox;
				_tmp74_ = propertyWidget;
				gtk_box_pack_start ((GtkBox*) _tmp73_, _tmp74_, FALSE, TRUE, (guint) 1);
				_tmp75_ = content;
				_tmp76_ = propertyVBox;
				gtk_box_pack_start (_tmp75_, (GtkWidget*) _tmp76_, FALSE, TRUE, (guint) 1);
				_g_object_unref0 (propertyWidget);
				_g_object_unref0 (descriptionLabel);
				_g_object_unref0 (nameLabel);
				_g_object_unref0 (propertyVBox);
				_g_free0 (description);
				_g_free0 (name);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	_tmp77_ = self->priv->dialog;
	g_signal_connect (_tmp77_, "response", (GCallback) _properties_query_response_handler_gtk_dialog_response, self);
	_tmp78_ = (GtkButton*) gtk_button_new_with_label ("Cancel");
	_tmp79_ = g_object_ref_sink (_tmp78_);
	_g_object_unref0 (self->priv->cancelButton);
	self->priv->cancelButton = _tmp79_;
	_tmp80_ = self->priv->dialog;
	_tmp81_ = self->priv->cancelButton;
	gtk_dialog_add_action_widget (_tmp80_, (GtkWidget*) _tmp81_, (gint) GTK_RESPONSE_CANCEL);
	_tmp82_ = (GtkButton*) gtk_button_new_with_label ("Apply");
	_tmp83_ = g_object_ref_sink (_tmp82_);
	_g_object_unref0 (self->priv->applyButton);
	self->priv->applyButton = _tmp83_;
	_tmp84_ = self->priv->dialog;
	_tmp85_ = self->priv->applyButton;
	gtk_dialog_add_action_widget (_tmp84_, (GtkWidget*) _tmp85_, (gint) GTK_RESPONSE_APPLY);
	_tmp86_ = propertySet;
	_tmp87_ = _property_item_ref0 (_tmp86_);
	_property_item_unref0 (self->priv->propertySet);
	self->priv->propertySet = _tmp87_;
	_tmp88_ = self->priv->dialog;
	gtk_widget_show_all ((GtkWidget*) _tmp88_);
	_g_object_unref0 (content);
	_g_free0 (_tmp2_);
	return self;
}


PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	return properties_query_construct (TYPE_PROPERTIES_QUERY, title, parent, propertySet);
}


/**
 * Handles any action which closes the dialog (apply or cancel).
 */
void properties_query_response_handler (PropertiesQuery* self, gint response_id) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = response_id;
	switch (_tmp0_) {
		case GTK_RESPONSE_APPLY:
		{
			properties_query_apply_changes (self);
			break;
		}
		case GTK_RESPONSE_CANCEL:
		{
			break;
		}
		default:
		break;
	}
}


/**
 * Makes the dialog modal, and waits for the dialog to close.
 */
gint properties_query_run (PropertiesQuery* self) {
	gint result = 0;
	gint response_id = 0;
	GtkDialog* _tmp0_;
	gint _tmp1_ = 0;
	GtkDialog* _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->dialog;
	_tmp1_ = gtk_dialog_run (_tmp0_);
	response_id = _tmp1_;
	_tmp2_ = self->priv->dialog;
	gtk_object_destroy ((GtkObject*) _tmp2_);
	result = response_id;
	return result;
}


/**
 * Copies the values stored in GTK widgets into the PropertySet.
 */
gboolean properties_query_apply_changes (PropertiesQuery* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				gboolean _tmp1_;
				gint _tmp3_;
				PropertySet* _tmp4_;
				PropertyItem** _tmp5_;
				gint _tmp5__length1;
				PropertySet* _tmp6_;
				PropertyItem** _tmp7_;
				gint _tmp7__length1;
				gint _tmp8_;
				PropertyItem* _tmp9_;
				PropertyItem* _tmp10_;
				PropertyItem* propertyItem;
				GtkWidget** _tmp11_;
				gint _tmp11__length1;
				gint _tmp12_;
				GtkWidget* _tmp13_;
				GtkWidget* _tmp14_;
				GtkWidget* propertyWidget;
				PropertyItem* _tmp15_;
				GtkWidget* _tmp16_;
				_tmp1_ = _tmp0_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = self->priv->propertySet;
				_tmp5_ = _tmp4_->propertyItems;
				_tmp5__length1 = _tmp4_->propertyItems_length1;
				if (!(_tmp3_ < _tmp5__length1)) {
					break;
				}
				_tmp6_ = self->priv->propertySet;
				_tmp7_ = _tmp6_->propertyItems;
				_tmp7__length1 = _tmp6_->propertyItems_length1;
				_tmp8_ = i;
				_tmp9_ = _tmp7_[_tmp8_];
				_tmp10_ = _property_item_ref0 (_tmp9_);
				propertyItem = _tmp10_;
				_tmp11_ = self->priv->propertyWidgets;
				_tmp11__length1 = self->priv->propertyWidgets_length1;
				_tmp12_ = i;
				_tmp13_ = _tmp11_[_tmp12_];
				_tmp14_ = _g_object_ref0 (_tmp13_);
				propertyWidget = _tmp14_;
				_tmp15_ = propertyItem;
				_tmp16_ = propertyWidget;
				property_item_read_widget (_tmp15_, _tmp16_);
				_g_object_unref0 (propertyWidget);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	result = FALSE;
	return result;
}


static void value_properties_query_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_properties_query_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		properties_query_unref (value->data[0].v_pointer);
	}
}


static void value_properties_query_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = properties_query_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_properties_query_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_properties_query_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		PropertiesQuery* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = properties_query_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_properties_query_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	PropertiesQuery** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = properties_query_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecPropertiesQuery* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_PROPERTIES_QUERY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_properties_query (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY), NULL);
	return value->data[0].v_pointer;
}


void value_set_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		properties_query_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


void value_take_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


static void properties_query_class_init (PropertiesQueryClass * klass) {
	properties_query_parent_class = g_type_class_peek_parent (klass);
	PROPERTIES_QUERY_CLASS (klass)->finalize = properties_query_finalize;
	g_type_class_add_private (klass, sizeof (PropertiesQueryPrivate));
}


static void properties_query_instance_init (PropertiesQuery * self) {
	self->priv = PROPERTIES_QUERY_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void properties_query_finalize (PropertiesQuery* obj) {
	PropertiesQuery * self;
	self = PROPERTIES_QUERY (obj);
	_property_item_unref0 (self->priv->propertySet);
	_g_object_unref0 (self->priv->dialog);
	_g_object_unref0 (self->priv->titleNameLabel);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->propertyVBoxes = (_vala_array_free (self->priv->propertyVBoxes, self->priv->propertyVBoxes_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->nameLabels = (_vala_array_free (self->priv->nameLabels, self->priv->nameLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->descriptionLabels = (_vala_array_free (self->priv->descriptionLabels, self->priv->descriptionLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->propertyWidgets = (_vala_array_free (self->priv->propertyWidgets, self->priv->propertyWidgets_length1, (GDestroyNotify) g_object_unref), NULL);
	_g_object_unref0 (self->priv->applyButton);
	_g_object_unref0 (self->priv->cancelButton);
}


/**
 * User interface to edit a PropertySet.
 * 
 * Creates a GTK Dialog which allows the editting of a PropertySet.
 */
GType properties_query_get_type (void) {
	static volatile gsize properties_query_type_id__volatile = 0;
	if (g_once_init_enter (&properties_query_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_properties_query_init, value_properties_query_free_value, value_properties_query_copy_value, value_properties_query_peek_pointer, "p", value_properties_query_collect_value, "p", value_properties_query_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (PropertiesQueryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) properties_query_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertiesQuery), 0, (GInstanceInitFunc) properties_query_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType properties_query_type_id;
		properties_query_type_id = g_type_register_fundamental (g_type_fundamental_next (), "PropertiesQuery", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&properties_query_type_id__volatile, properties_query_type_id);
	}
	return properties_query_type_id__volatile;
}


gpointer properties_query_ref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void properties_query_unref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PROPERTIES_QUERY_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
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


