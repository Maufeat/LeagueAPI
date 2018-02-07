#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatConversationMessageResource { 
    std::string id;
    std::string type;
    uint64_t fromId;
    std::string body;
    std::string timestamp;
    bool isHistorical; 
  };
  inline void to_json(json& j, const LolChatConversationMessageResource& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["fromId"] = v.fromId; 
    j["body"] = v.body; 
    j["timestamp"] = v.timestamp; 
    j["isHistorical"] = v.isHistorical; 
  }
  inline void from_json(const json& j, LolChatConversationMessageResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.fromId = j.at("fromId").get<uint64_t>(); 
    v.body = j.at("body").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.isHistorical = j.at("isHistorical").get<bool>(); 
  }
}