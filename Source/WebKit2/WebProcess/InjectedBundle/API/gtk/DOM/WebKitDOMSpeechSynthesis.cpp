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
#include "WebKitDOMSpeechSynthesis.h"

#include <WebCore/CSSImportRule.h>
#include "DOMObjectCache.h"
#include <WebCore/Document.h>
#include <WebCore/ExceptionCode.h>
#include <WebCore/ExceptionCodeDescription.h>
#include <WebCore/JSMainThreadExecState.h>
#include "WebKitDOMPrivate.h"
#include "WebKitDOMSpeechSynthesisPrivate.h"
#include "WebKitDOMSpeechSynthesisUtterancePrivate.h"
#include "ConvertToUTF8String.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

#define WEBKIT_DOM_SPEECH_SYNTHESIS_GET_PRIVATE(obj) G_TYPE_INSTANCE_GET_PRIVATE(obj, WEBKIT_DOM_TYPE_SPEECH_SYNTHESIS, WebKitDOMSpeechSynthesisPrivate)

typedef struct _WebKitDOMSpeechSynthesisPrivate {
#if ENABLE(SPEECH_SYNTHESIS)
    RefPtr<WebCore::SpeechSynthesis> coreObject;
#endif // ENABLE(SPEECH_SYNTHESIS)
} WebKitDOMSpeechSynthesisPrivate;

#if ENABLE(SPEECH_SYNTHESIS)

namespace WebKit {

WebKitDOMSpeechSynthesis* kit(WebCore::SpeechSynthesis* obj)
{
    if (!obj)
        return 0;

    if (gpointer ret = DOMObjectCache::get(obj))
        return WEBKIT_DOM_SPEECH_SYNTHESIS(ret);

    return wrapSpeechSynthesis(obj);
}

WebCore::SpeechSynthesis* core(WebKitDOMSpeechSynthesis* request)
{
    return request ? static_cast<WebCore::SpeechSynthesis*>(WEBKIT_DOM_OBJECT(request)->coreObject) : 0;
}

WebKitDOMSpeechSynthesis* wrapSpeechSynthesis(WebCore::SpeechSynthesis* coreObject)
{
    ASSERT(coreObject);
    return WEBKIT_DOM_SPEECH_SYNTHESIS(g_object_new(WEBKIT_DOM_TYPE_SPEECH_SYNTHESIS, "core-object", coreObject, nullptr));
}

} // namespace WebKit

#endif // ENABLE(SPEECH_SYNTHESIS)

G_DEFINE_TYPE(WebKitDOMSpeechSynthesis, webkit_dom_speech_synthesis, WEBKIT_DOM_TYPE_OBJECT)

enum {
    PROP_0,
    PROP_PENDING,
    PROP_SPEAKING,
    PROP_PAUSED,
};

static void webkit_dom_speech_synthesis_finalize(GObject* object)
{
    WebKitDOMSpeechSynthesisPrivate* priv = WEBKIT_DOM_SPEECH_SYNTHESIS_GET_PRIVATE(object);
#if ENABLE(SPEECH_SYNTHESIS)
    WebKit::DOMObjectCache::forget(priv->coreObject.get());
#endif // ENABLE(SPEECH_SYNTHESIS)
    priv->~WebKitDOMSpeechSynthesisPrivate();
    G_OBJECT_CLASS(webkit_dom_speech_synthesis_parent_class)->finalize(object);
}

static void webkit_dom_speech_synthesis_get_property(GObject* object, guint propertyId, GValue* value, GParamSpec* pspec)
{
    WebKitDOMSpeechSynthesis* self = WEBKIT_DOM_SPEECH_SYNTHESIS(object);

    switch (propertyId) {
    case PROP_PENDING:
        g_value_set_boolean(value, webkit_dom_speech_synthesis_get_pending(self));
        break;
    case PROP_SPEAKING:
        g_value_set_boolean(value, webkit_dom_speech_synthesis_get_speaking(self));
        break;
    case PROP_PAUSED:
        g_value_set_boolean(value, webkit_dom_speech_synthesis_get_paused(self));
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, propertyId, pspec);
        break;
    }
}

static GObject* webkit_dom_speech_synthesis_constructor(GType type, guint constructPropertiesCount, GObjectConstructParam* constructProperties)
{
    GObject* object = G_OBJECT_CLASS(webkit_dom_speech_synthesis_parent_class)->constructor(type, constructPropertiesCount, constructProperties);
#if ENABLE(SPEECH_SYNTHESIS)
    WebKitDOMSpeechSynthesisPrivate* priv = WEBKIT_DOM_SPEECH_SYNTHESIS_GET_PRIVATE(object);
    priv->coreObject = static_cast<WebCore::SpeechSynthesis*>(WEBKIT_DOM_OBJECT(object)->coreObject);
    WebKit::DOMObjectCache::put(priv->coreObject.get(), object);
#endif // ENABLE(SPEECH_SYNTHESIS)
    return object;
}

static void webkit_dom_speech_synthesis_class_init(WebKitDOMSpeechSynthesisClass* requestClass)
{
    GObjectClass* gobjectClass = G_OBJECT_CLASS(requestClass);
    g_type_class_add_private(gobjectClass, sizeof(WebKitDOMSpeechSynthesisPrivate));
    gobjectClass->constructor = webkit_dom_speech_synthesis_constructor;
    gobjectClass->finalize = webkit_dom_speech_synthesis_finalize;
    gobjectClass->get_property = webkit_dom_speech_synthesis_get_property;

    g_object_class_install_property(
        gobjectClass,
        PROP_PENDING,
        g_param_spec_boolean(
            "pending",
            "SpeechSynthesis:pending",
            "read-only gboolean SpeechSynthesis:pending",
            FALSE,
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_SPEAKING,
        g_param_spec_boolean(
            "speaking",
            "SpeechSynthesis:speaking",
            "read-only gboolean SpeechSynthesis:speaking",
            FALSE,
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_PAUSED,
        g_param_spec_boolean(
            "paused",
            "SpeechSynthesis:paused",
            "read-only gboolean SpeechSynthesis:paused",
            FALSE,
            WEBKIT_PARAM_READABLE));

}

static void webkit_dom_speech_synthesis_init(WebKitDOMSpeechSynthesis* request)
{
    WebKitDOMSpeechSynthesisPrivate* priv = WEBKIT_DOM_SPEECH_SYNTHESIS_GET_PRIVATE(request);
    new (priv) WebKitDOMSpeechSynthesisPrivate();
}

void webkit_dom_speech_synthesis_speak(WebKitDOMSpeechSynthesis* self, WebKitDOMSpeechSynthesisUtterance* utterance)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self));
    g_return_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS_UTTERANCE(utterance));
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    WebCore::SpeechSynthesisUtterance* convertedUtterance = WebKit::core(utterance);
    item->speak(*convertedUtterance);
#else
    UNUSED_PARAM(self);
    UNUSED_PARAM(utterance);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

void webkit_dom_speech_synthesis_cancel(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self));
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    item->cancel();
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

void webkit_dom_speech_synthesis_pause(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self));
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    item->pause();
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

void webkit_dom_speech_synthesis_resume(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self));
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    item->resume();
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

gboolean webkit_dom_speech_synthesis_get_pending(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self), FALSE);
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    gboolean result = item->pending();
    return result;
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

gboolean webkit_dom_speech_synthesis_get_speaking(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self), FALSE);
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    gboolean result = item->speaking();
    return result;
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

gboolean webkit_dom_speech_synthesis_get_paused(WebKitDOMSpeechSynthesis* self)
{
#if ENABLE(SPEECH_SYNTHESIS)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_SPEECH_SYNTHESIS(self), FALSE);
    WebCore::SpeechSynthesis* item = WebKit::core(self);
    gboolean result = item->paused();
    return result;
#else
    UNUSED_PARAM(self);
    WEBKIT_WARN_FEATURE_NOT_PRESENT("Speech Synthesis")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SPEECH_SYNTHESIS) */
}

