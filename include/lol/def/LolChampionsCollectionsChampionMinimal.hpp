#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionMinimal { 
    std::string squarePortraitPath;
    std::vector<std::string> roles;
    std::string banVoPath;
    std::string name;
    uint64_t purchased;
    bool freeToPlay;
    LolChampionsCollectionsOwnership ownership;
    std::string stingerSfxPath;
    bool active;
    bool rankedPlayEnabled;
    std::string alias;
    int32_t id;
    std::vector<std::string> disabledQueues;
    bool botEnabled;
    std::string chooseVoPath; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionMinimal& v) {
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["roles"] = v.roles; 
    j["banVoPath"] = v.banVoPath; 
    j["name"] = v.name; 
    j["purchased"] = v.purchased; 
    j["freeToPlay"] = v.freeToPlay; 
    j["ownership"] = v.ownership; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["active"] = v.active; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["alias"] = v.alias; 
    j["id"] = v.id; 
    j["disabledQueues"] = v.disabledQueues; 
    j["botEnabled"] = v.botEnabled; 
    j["chooseVoPath"] = v.chooseVoPath; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionMinimal& v) {
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
  }
}