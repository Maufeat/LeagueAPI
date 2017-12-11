#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatGroupResource { /**/ 
    int32_t priority;/**/
    bool isMetaGroup;/**/
    bool collapsed;/**/
    uint32_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolChatGroupResource& v) { 
    j["priority"] = v.priority;
    j["isMetaGroup"] = v.isMetaGroup;
    j["collapsed"] = v.collapsed;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolChatGroupResource& v) { 
    v.priority = j.at("priority").get<int32_t>(); 
    v.isMetaGroup = j.at("isMetaGroup").get<bool>(); 
    v.collapsed = j.at("collapsed").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 