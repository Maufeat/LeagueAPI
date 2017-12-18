#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsGameDataChampionSkin.hpp>
#include <lol/def/LolChampionsGameDataChampionSpell.hpp>
namespace lol {
  struct LolChampionsGameDataChampion { 
    std::vector<LolChampionsGameDataChampionSpell> spells;
    std::string alias;
    std::vector<std::string> roles;
    std::string chooseVoPath;
    LolChampionsGameDataChampionSpell passive;
    std::string stingerSfxPath;
    std::string name;
    std::string squarePortraitPath;
    std::vector<LolChampionsGameDataChampionSkin> skins;
    std::string banVoPath;
    int32_t id; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampion& v) {
    j["spells"] = v.spells; 
    j["alias"] = v.alias; 
    j["roles"] = v.roles; 
    j["chooseVoPath"] = v.chooseVoPath; 
    j["passive"] = v.passive; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["name"] = v.name; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["skins"] = v.skins; 
    j["banVoPath"] = v.banVoPath; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampion& v) {
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell>>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin>>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}