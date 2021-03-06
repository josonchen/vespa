// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#include "batchdocumentupdatereply.h"
#include <vespa/documentapi/messagebus/documentprotocol.h>

namespace documentapi {

BatchDocumentUpdateReply::BatchDocumentUpdateReply()
    : WriteDocumentReply(DocumentProtocol::REPLY_BATCHDOCUMENTUPDATE)
{ }

BatchDocumentUpdateReply::~BatchDocumentUpdateReply() {}

}
