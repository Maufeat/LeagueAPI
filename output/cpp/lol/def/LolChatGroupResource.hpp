#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatGroupResource { 
    int32_t priority;
    bool collapsed;
    std::string name;
    bool isMetaGroup;
    uint32_t id; 
  };
  void to_json(json& j, const LolChatGroupResource& v) {
    j["priority"] = v.priority; 
    j["collapsed"] = v.collapsed; 
    j["name"] = v.name; 
    j["isMetaGroup"] = v.isMetaGroup; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatGroupResource& v) {
    v.priority = j.at("priority").get<int32_t>(); 
    v.collapsed = j.at("collapsed").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isMetaGroup = j.at("isMetaGroup").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}