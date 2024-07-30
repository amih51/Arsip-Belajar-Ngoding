const ITEM_CONTAINER = document.getElementById("items")
const ITEM_TEMPLATE = document.getElementById("item-template")
const ADD_BUTTON = document.getElementById("add")

let items = getItem()

function getItem() {
    const value = localStorage.getItem("todo") || "[]"

    return JSON.parse(value)
}

function setItems(items) {
    const itemsJSON = JSON.stringify(items)

    localStorage.setItem("todo", itemsJSON)
}

function addItem() {
    items.unshift({
        description: "",
        completed: false
    })

    setItems(items)
    refreshList()
}

function updateItem(item, key, value) {
    item[key] = value

    setItems(items)
    refreshList()
}

function refreshList() {

    ITEM_CONTAINER.innerHTML = ""
    for (const item of items) {
        const item_element = ITEM_TEMPLATE.content.cloneNode(true)
        const description_input = item_element.querySelector(".item-description")
        const completed_input = item_element.querySelector(".item-completed")

        description_input.value = item.description
        completed_input.checked = item.completed

        description_input.addEventListener("change", () => {
            updateItem(item, "description", description_input.value)
        })

        completed_input.addEventListener("change", () => {
            updateItem(item, "completed", completed_input.checked)
        })

        ITEM_CONTAINER.append(item_element)
    }
}

ADD_BUTTON.addEventListener('click', () => {
    addItem()
})

refreshList()