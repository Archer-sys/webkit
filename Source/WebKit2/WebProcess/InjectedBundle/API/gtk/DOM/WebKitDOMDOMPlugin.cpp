/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "WebKitDOMDOMPlugin.h"

#include <WebCore/CSSImportRule.h>
#include "DOMObjectCache.h"
#include <WebCore/Document.h>
#include <WebCore/ExceptionCode.h>
#include <WebCore/ExceptionCodeDescription.h>
#include <WebCore/JSMainThreadExecState.h>
#include "WebKitDOMDOMMimeTypePrivate.h"
#include "WebKitDOMDOMPluginPrivate.h"
#include "WebKitDOMPrivate.h"
#include "ConvertToUTF8String.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

#define WEBKIT_DOM_DOM_PLUGIN_GET_PRIVATE(obj) G_TYPE_INSTANCE_GET_PRIVATE(obj, WEBKIT_DOM_TYPE_DOM_PLUGIN, WebKitDOMDOMPluginPrivate)

typedef struct _WebKitDOMDOMPluginPrivate {
    RefPtr<WebCore::DOMPlugin> coreObject;
} WebKitDOMDOMPluginPrivate;

namespace WebKit {

WebKitDOMDOMPlugin* kit(WebCore::DOMPlugin* obj)
{
    if (!obj)
        return 0;

    if (gpointer ret = DOMObjectCache::get(obj))
        return WEBKIT_DOM_DOM_PLUGIN(ret);

    return wrapDOMPlugin(obj);
}

WebCore::DOMPlugin* core(WebKitDOMDOMPlugin* request)
{
    return request ? static_cast<WebCore::DOMPlugin*>(WEBKIT_DOM_OBJECT(request)->coreObject) : 0;
}

WebKitDOMDOMPlugin* wrapDOMPlugin(WebCore::DOMPlugin* coreObject)
{
    ASSERT(coreObject);
    return WEBKIT_DOM_DOM_PLUGIN(g_object_new(WEBKIT_DOM_TYPE_DOM_PLUGIN, "core-object", coreObject, nullptr));
}

} // namespace WebKit

G_DEFINE_TYPE(WebKitDOMDOMPlugin, webkit_dom_dom_plugin, WEBKIT_DOM_TYPE_OBJECT)

enum {
    PROP_0,
    PROP_NAME,
    PROP_FILENAME,
    PROP_DESCRIPTION,
    PROP_LENGTH,
};

static void webkit_dom_dom_plugin_finalize(GObject* object)
{
    WebKitDOMDOMPluginPrivate* priv = WEBKIT_DOM_DOM_PLUGIN_GET_PRIVATE(object);

    WebKit::DOMObjectCache::forget(priv->coreObject.get());

    priv->~WebKitDOMDOMPluginPrivate();
    G_OBJECT_CLASS(webkit_dom_dom_plugin_parent_class)->finalize(object);
}

static void webkit_dom_dom_plugin_get_property(GObject* object, guint propertyId, GValue* value, GParamSpec* pspec)
{
    WebKitDOMDOMPlugin* self = WEBKIT_DOM_DOM_PLUGIN(object);

    switch (propertyId) {
    case PROP_NAME:
        g_value_take_string(value, webkit_dom_dom_plugin_get_name(self));
        break;
    case PROP_FILENAME:
        g_value_take_string(value, webkit_dom_dom_plugin_get_filename(self));
        break;
    case PROP_DESCRIPTION:
        g_value_take_string(value, webkit_dom_dom_plugin_get_description(self));
        break;
    case PROP_LENGTH:
        g_value_set_ulong(value, webkit_dom_dom_plugin_get_length(self));
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, propertyId, pspec);
        break;
    }
}

static GObject* webkit_dom_dom_plugin_constructor(GType type, guint constructPropertiesCount, GObjectConstructParam* constructProperties)
{
    GObject* object = G_OBJECT_CLASS(webkit_dom_dom_plugin_parent_class)->constructor(type, constructPropertiesCount, constructProperties);

    WebKitDOMDOMPluginPrivate* priv = WEBKIT_DOM_DOM_PLUGIN_GET_PRIVATE(object);
    priv->coreObject = static_cast<WebCore::DOMPlugin*>(WEBKIT_DOM_OBJECT(object)->coreObject);
    WebKit::DOMObjectCache::put(priv->coreObject.get(), object);

    return object;
}

static void webkit_dom_dom_plugin_class_init(WebKitDOMDOMPluginClass* requestClass)
{
    GObjectClass* gobjectClass = G_OBJECT_CLASS(requestClass);
    g_type_class_add_private(gobjectClass, sizeof(WebKitDOMDOMPluginPrivate));
    gobjectClass->constructor = webkit_dom_dom_plugin_constructor;
    gobjectClass->finalize = webkit_dom_dom_plugin_finalize;
    gobjectClass->get_property = webkit_dom_dom_plugin_get_property;

    g_object_class_install_property(
        gobjectClass,
        PROP_NAME,
        g_param_spec_string(
            "name",
            "DOMPlugin:name",
            "read-only gchar* DOMPlugin:name",
            "",
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_FILENAME,
        g_param_spec_string(
            "filename",
            "DOMPlugin:filename",
            "read-only gchar* DOMPlugin:filename",
            "",
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_DESCRIPTION,
        g_param_spec_string(
            "description",
            "DOMPlugin:description",
            "read-only gchar* DOMPlugin:description",
            "",
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_LENGTH,
        g_param_spec_ulong(
            "length",
            "DOMPlugin:length",
            "read-only gulong DOMPlugin:length",
            0, G_MAXULONG, 0,
            WEBKIT_PARAM_READABLE));

}

static void webkit_dom_dom_plugin_init(WebKitDOMDOMPlugin* request)
{
    WebKitDOMDOMPluginPrivate* priv = WEBKIT_DOM_DOM_PLUGIN_GET_PRIVATE(request);
    new (priv) WebKitDOMDOMPluginPrivate();
}

WebKitDOMDOMMimeType* webkit_dom_dom_plugin_item(WebKitDOMDOMPlugin* self, gulong index)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    RefPtr<WebCore::DOMMimeType> gobjectResult = WTF::getPtr(item->item(index));
    return WebKit::kit(gobjectResult.get());
}

WebKitDOMDOMMimeType* webkit_dom_dom_plugin_named_item(WebKitDOMDOMPlugin* self, const gchar* name)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    g_return_val_if_fail(name, 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    WTF::String convertedName = WTF::String::fromUTF8(name);
    RefPtr<WebCore::DOMMimeType> gobjectResult = WTF::getPtr(item->namedItem(convertedName));
    return WebKit::kit(gobjectResult.get());
}

gchar* webkit_dom_dom_plugin_get_name(WebKitDOMDOMPlugin* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    gchar* result = convertToUTF8String(item->name());
    return result;
}

gchar* webkit_dom_dom_plugin_get_filename(WebKitDOMDOMPlugin* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    gchar* result = convertToUTF8String(item->filename());
    return result;
}

gchar* webkit_dom_dom_plugin_get_description(WebKitDOMDOMPlugin* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    gchar* result = convertToUTF8String(item->description());
    return result;
}

gulong webkit_dom_dom_plugin_get_length(WebKitDOMDOMPlugin* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_PLUGIN(self), 0);
    WebCore::DOMPlugin* item = WebKit::core(self);
    gulong result = item->length();
    return result;
}

