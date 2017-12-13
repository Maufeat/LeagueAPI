#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatConversationMessageResource { 
    std::string body;
    bool isHistorical;
    std::string timestamp;
    std::string type;
    uint64_t fromId;
    std::string id; 
  };
  void to_json(json& j, const LolChatConversationMessageResource& v) {
  j["body"] = v.body; 
  j["isHistorical"] = v.isHistorical; 
  j["timestamp"] = v.timestamp; 
  j["type"] = v.type; 
  j["fromId"] = v.fromId; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatConversationMessageResource& v) {
  v.body = j.at("body").get<std::string>(); 
  v.isHistorical = j.at("isHistorical").get<bool>(); 
  v.timestamp = j.at("timestamp").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.fromId = j.at("fromId").get<uint64_t>(); 
  v.id = j.at("id").get<std::string>(); 
  }
}