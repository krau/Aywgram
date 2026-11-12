/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#include "test/test_l10n_seams.h"
#include "test/test_widget_bot.h"
#include "test/test_widget_host.h"
#include "test/test_widget_ops.h"

namespace Test {

void NoteLangRead(ushort) {
}

std::optional<double> OverrideAppConfigDouble(const QString &) {
	return std::nullopt;
}

std::optional<bool> OverrideAppConfigBool(const QString &) {
	return std::nullopt;
}

std::optional<QString> OverrideAppConfigString(const QString &) {
	return std::nullopt;
}

bool HoldRequest(
		not_null<MTP::Instance*>,
		const MTP::details::SerializedRequest &) {
	return false;
}

bool PlayWidgetBot(
		GlobalMsgId,
		const std::string &,
		const Fn<void(const twidget::WidgetRequestOutcome&)> &,
		bool) {
	return false;
}

twidget::RendererFactory TapWidgetRenderer(
		GlobalMsgId,
		twidget::RendererFactory factory) {
	return factory;
}

twidget::WidgetHostOptions OverrideWidgetHostOptions(
		GlobalMsgId,
		twidget::WidgetHostOptions options) {
	return options;
}

void WatchWidgetHost(GlobalMsgId, twidget::WidgetHost &, const void *) {
}

} // namespace Test
