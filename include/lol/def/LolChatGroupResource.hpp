#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatGroupResource { 
    uint32_t id;
    std::string name;
    bool isMetaGroup;
    int32_t priority;
    bool collapsed; 
  };
  inline void to_json(json& j, const LolChatGroupResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["isMetaGroup"] = v.isMetaGroup; 
    j["priority"] = v.priority; 
    j["collapsed"] = v.collapsed; 
  }
  inline void from_json(const json& j, LolChatGroupResource& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isMetaGroup = j.at("isMetaGroup").get<bool>(); 
    v.priority = j.at("priority").get<int32_t>(); 
    v.collapsed = j.at("collapsed").get<bool>(); 
  }
}