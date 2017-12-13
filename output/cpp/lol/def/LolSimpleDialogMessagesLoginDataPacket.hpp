#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSimpleDialogMessagesSimpleMessage.hpp>
namespace lol {
  struct LolSimpleDialogMessagesLoginDataPacket { 
    std::vector<LolSimpleDialogMessagesSimpleMessage> simpleMessages; 
  };
  void to_json(json& j, const LolSimpleDialogMessagesLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages; 
  }
  void from_json(const json& j, LolSimpleDialogMessagesLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolSimpleDialogMessagesSimpleMessage>>(); 
  }
}