#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatConversationMessageResource { 
    std::string timestamp;
    uint64_t fromId;
    std::string id;
    std::string body;
    std::string type;
    bool isHistorical; 
  };
  inline void to_json(json& j, const LolChatConversationMessageResource& v) {
    j["timestamp"] = v.timestamp; 
    j["fromId"] = v.fromId; 
    j["id"] = v.id; 
    j["body"] = v.body; 
    j["type"] = v.type; 
    j["isHistorical"] = v.isHistorical; 
  }
  inline void from_json(const json& j, LolChatConversationMessageResource& v) {
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.fromId = j.at("fromId").get<uint64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.isHistorical = j.at("isHistorical").get<bool>(); 
  }
}