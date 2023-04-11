
#pragma once
#include "subghz_types.h"
#include "subghz_txrx_�allbacks.h"
#include <lib/subghz/subghz_worker.h>
#include <lib/subghz/subghz_setting.h>
#include <lib/subghz/receiver.h>
#include <lib/subghz/transmitter.h>

struct SubGhzTxRx {
    SubGhzWorker* worker;

    SubGhzEnvironment* environment;
    SubGhzReceiver* receiver;
    SubGhzTransmitter* transmitter;
    SubGhzProtocolDecoderBase* decoder_result;
    FlipperFormat* fff_data;

    SubGhzRadioPreset* preset;
    SubGhzSetting* setting;

    uint8_t hopper_timeout;
    uint8_t hopper_idx_frequency;
    bool load_database;
    SubGhzHopperState hopper_state;

    SubGhzTxRxState txrx_state;
    SubGhzSpeakerState speaker_state;

    SubGhzTxRxNeedSaveCallback need_save_callback;
    void* need_save_context;
};
