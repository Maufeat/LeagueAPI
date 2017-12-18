#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatActiveConversationResource { 
    std::string id; 
  };
  inline void to_json(json& j, const LolChatActiveConversationResource& v) {
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChatActiveConversationResource& v) {
    v.id = j.at("id").get<std::string>(); 
  }
}