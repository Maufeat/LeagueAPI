#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkPageResource { 
    bool isValid;
    int32_t subStyleId;
    std::string name;
    bool isActive;
    bool isEditable;
    int32_t primaryStyleId;
    bool current;
    int32_t id;
    int32_t order;
    bool isDeletable;
    std::vector<int32_t> selectedPerkIds;
    int32_t formatVersion; 
  };
  inline void to_json(json& j, const LolPerksPerkPageResource& v) {
    j["isValid"] = v.isValid; 
    j["subStyleId"] = v.subStyleId; 
    j["name"] = v.name; 
    j["isActive"] = v.isActive; 
    j["isEditable"] = v.isEditable; 
    j["primaryStyleId"] = v.primaryStyleId; 
    j["current"] = v.current; 
    j["id"] = v.id; 
    j["order"] = v.order; 
    j["isDeletable"] = v.isDeletable; 
    j["selectedPerkIds"] = v.selectedPerkIds; 
    j["formatVersion"] = v.formatVersion; 
  }
  inline void from_json(const json& j, LolPerksPerkPageResource& v) {
    v.isValid = j.at("isValid").get<bool>(); 
    v.subStyleId = j.at("subStyleId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isActive = j.at("isActive").get<bool>(); 
    v.isEditable = j.at("isEditable").get<bool>(); 
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>(); 
    v.current = j.at("current").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.isDeletable = j.at("isDeletable").get<bool>(); 
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>(); 
    v.formatVersion = j.at("formatVersion").get<int32_t>(); 
  }
}