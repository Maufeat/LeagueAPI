#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryInventoryItemDTO { 
    bool rental;
    std::string usedInGameDate;
    std::string inventoryType;
    std::string entitlementId;
    std::string instanceTypeId;
    int32_t itemId;
    std::string purchaseDate;
    std::string instanceId;
    bool lsb;
    std::string eneitlementTypeId;
    uint64_t quantity;
    bool f2p;
    uint64_t wins;
    std::string expirationDate; 
  };
  inline void to_json(json& j, const LolInventoryInventoryItemDTO& v) {
    j["rental"] = v.rental; 
    j["usedInGameDate"] = v.usedInGameDate; 
    j["inventoryType"] = v.inventoryType; 
    j["entitlementId"] = v.entitlementId; 
    j["instanceTypeId"] = v.instanceTypeId; 
    j["itemId"] = v.itemId; 
    j["purchaseDate"] = v.purchaseDate; 
    j["instanceId"] = v.instanceId; 
    j["lsb"] = v.lsb; 
    j["eneitlementTypeId"] = v.eneitlementTypeId; 
    j["quantity"] = v.quantity; 
    j["f2p"] = v.f2p; 
    j["wins"] = v.wins; 
    j["expirationDate"] = v.expirationDate; 
  }
  inline void from_json(const json& j, LolInventoryInventoryItemDTO& v) {
    v.rental = j.at("rental").get<bool>(); 
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.entitlementId = j.at("entitlementId").get<std::string>(); 
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
    v.instanceId = j.at("instanceId").get<std::string>(); 
    v.lsb = j.at("lsb").get<bool>(); 
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>(); 
    v.quantity = j.at("quantity").get<uint64_t>(); 
    v.f2p = j.at("f2p").get<bool>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
  }
}