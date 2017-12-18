#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSettingsResource { 
    json data; 
  };
  inline void to_json(json& j, const LolChatSettingsResource& v) {
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolChatSettingsResource& v) {
    v.data = j.at("data").get<json>(); 
  }
}