// Alterna o menu hambúrguer no mobile
const toggle = document.getElementById("menu-toggle");
const nav = document.getElementById("nav-links");

toggle.addEventListener("click", () => {
  nav.classList.toggle("active");
});

// Alterna submenus no mobile
const dropdowns = document.querySelectorAll(".dropdown");

dropdowns.forEach(drop => {
  drop.addEventListener("click", () => {
    drop.classList.toggle("open");
  });
});
