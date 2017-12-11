#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatConversationMessageResource { /**/ 
    std::string timestamp;/**/
    std::string id;/**/
    std::string type;/**/
    uint64_t fromId;/**/
    bool isHistorical;/**/
    std::string body;/**/
  };
  static void to_json(json& j, const LolChatConversationMessageResource& v) { 
    j["timestamp"] = v.timestamp;
    j["id"] = v.id;
    j["type"] = v.type;
    j["fromId"] = v.fromId;
    j["isHistorical"] = v.isHistorical;
    j["body"] = v.body;
  }
  static void from_json(const json& j, LolChatConversationMessageResource& v) { 
    v.timestamp = j.at("timestamp").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.fromId = j.at("fromId").get<uint64_t>(); 
    v.isHistorical = j.at("isHistorical").get<bool>(); 
    v.body = j.at("body").get<std::string>(); 
  }
} 