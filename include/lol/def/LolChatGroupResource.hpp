#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatGroupResource { 
    uint32_t id;
    bool collapsed;
    int32_t priority;
    bool isMetaGroup;
    std::string name; 
  };
  inline void to_json(json& j, const LolChatGroupResource& v) {
    j["id"] = v.id; 
    j["collapsed"] = v.collapsed; 
    j["priority"] = v.priority; 
    j["isMetaGroup"] = v.isMetaGroup; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolChatGroupResource& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.collapsed = j.at("collapsed").get<bool>(); 
    v.priority = j.at("priority").get<int32_t>(); 
    v.isMetaGroup = j.at("isMetaGroup").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}