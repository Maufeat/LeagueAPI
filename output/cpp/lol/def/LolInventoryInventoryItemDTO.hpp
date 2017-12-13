#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryInventoryItemDTO { 
    bool lsb;
    uint64_t quantity;
    std::string expirationDate;
    std::string purchaseDate;
    int32_t itemId;
    std::string usedInGameDate;
    bool rental;
    std::string inventoryType;
    std::string eneitlementTypeId;
    std::string instanceId;
    std::string entitlementId;
    uint64_t wins;
    std::string instanceTypeId;
    bool f2p; 
  };
  void to_json(json& j, const LolInventoryInventoryItemDTO& v) {
    j["lsb"] = v.lsb; 
    j["quantity"] = v.quantity; 
    j["expirationDate"] = v.expirationDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["itemId"] = v.itemId; 
    j["usedInGameDate"] = v.usedInGameDate; 
    j["rental"] = v.rental; 
    j["inventoryType"] = v.inventoryType; 
    j["eneitlementTypeId"] = v.eneitlementTypeId; 
    j["instanceId"] = v.instanceId; 
    j["entitlementId"] = v.entitlementId; 
    j["wins"] = v.wins; 
    j["instanceTypeId"] = v.instanceTypeId; 
    j["f2p"] = v.f2p; 
  }
  void from_json(const json& j, LolInventoryInventoryItemDTO& v) {
    v.lsb = j.at("lsb").get<bool>(); 
    v.quantity = j.at("quantity").get<uint64_t>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.usedInGameDate = j.at("usedInGameDate").get<std::string>(); 
    v.rental = j.at("rental").get<bool>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.eneitlementTypeId = j.at("eneitlementTypeId").get<std::string>(); 
    v.instanceId = j.at("instanceId").get<std::string>(); 
    v.entitlementId = j.at("entitlementId").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.instanceTypeId = j.at("instanceTypeId").get<std::string>(); 
    v.f2p = j.at("f2p").get<bool>(); 
  }
}