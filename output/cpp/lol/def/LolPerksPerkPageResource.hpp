#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksPerkPageResource { 
    int32_t order;
    bool isValid;
    int32_t formatVersion;
    int32_t primaryStyleId;
    std::string name;
    bool isDeletable;
    int32_t id;
    std::vector<int32_t> selectedPerkIds;
    bool isActive;
    bool isEditable;
    bool current;
    int32_t subStyleId; 
  };
  void to_json(json& j, const LolPerksPerkPageResource& v) {
  j["order"] = v.order; 
  j["isValid"] = v.isValid; 
  j["formatVersion"] = v.formatVersion; 
  j["primaryStyleId"] = v.primaryStyleId; 
  j["name"] = v.name; 
  j["isDeletable"] = v.isDeletable; 
  j["id"] = v.id; 
  j["selectedPerkIds"] = v.selectedPerkIds; 
  j["isActive"] = v.isActive; 
  j["isEditable"] = v.isEditable; 
  j["current"] = v.current; 
  j["subStyleId"] = v.subStyleId; 
  }
  void from_json(const json& j, LolPerksPerkPageResource& v) {
  v.order = j.at("order").get<int32_t>(); 
  v.isValid = j.at("isValid").get<bool>(); 
  v.formatVersion = j.at("formatVersion").get<int32_t>(); 
  v.primaryStyleId = j.at("primaryStyleId").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.isDeletable = j.at("isDeletable").get<bool>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>(); 
  v.isActive = j.at("isActive").get<bool>(); 
  v.isEditable = j.at("isEditable").get<bool>(); 
  v.current = j.at("current").get<bool>(); 
  v.subStyleId = j.at("subStyleId").get<int32_t>(); 
  }
}