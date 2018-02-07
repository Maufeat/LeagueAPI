#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreBundleItemDTO { 
    std::string inventoryType;
    int32_t itemId;
    std::string iconUrl;
    uint32_t quantity;
    std::string name;
    std::string description;
    bool owned;
    int64_t rp;
    int64_t discountedRp;
    int64_t ip; 
  };
  inline void to_json(json& j, const LolStoreBundleItemDTO& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["iconUrl"] = v.iconUrl; 
    j["quantity"] = v.quantity; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["owned"] = v.owned; 
    j["rp"] = v.rp; 
    j["discountedRp"] = v.discountedRp; 
    j["ip"] = v.ip; 
  }
  inline void from_json(const json& j, LolStoreBundleItemDTO& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.discountedRp = j.at("discountedRp").get<int64_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
  }
}