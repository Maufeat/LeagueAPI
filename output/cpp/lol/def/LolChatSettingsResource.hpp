#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatSettingsResource { 
    json data; 
  };
  void to_json(json& j, const LolChatSettingsResource& v) {
  j["data"] = v.data; 
  }
  void from_json(const json& j, LolChatSettingsResource& v) {
  v.data = j.at("data").get<json>(); 
  }
}